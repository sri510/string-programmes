/*
Write a C program to find the length of the longest substring of a given string without repeating characters.

Sample Data:

(“string program in c”) -> 6
(“aabeeccjs”0 -> 3
*/
#include<stdio.h>
#include<string.h>
int test(char *str, int n)
{
    // lenght of longest and current substring
    int longest_str_len = 1;  
    int current_substr_len = 1;  
    int previous_index, i;   
    int temp[256];   
    memset(temp, -1, sizeof(int) * 256);
    temp[str[0]] = 0;   
    for (i = 1; i < n; i++)
    {
        previous_index = temp[str[i]];
        if (previous_index == -1 || i - current_substr_len > previous_index)
            current_substr_len++;  
                    
        else
        { 
            if (current_substr_len > longest_str_len)
                longest_str_len = current_substr_len;
            current_substr_len = i - previous_index;
        }
        temp[str[i]] = i;
    }
    if (current_substr_len > longest_str_len)
        longest_str_len = current_substr_len;
    return longest_str_len;
}
int main()
{
	char str1[80],chr[80];
	int n,i,x,ctr[80], result;
	printf("Input a string: ");
	scanf("%s",str1);
	n=strlen(str1);
    if (n>0)
    printf("Length of the longest substring without repeating characters: %d", test(str1, n));
}

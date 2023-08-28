/*
Write a program to reverse a string in C without using predefined function.
Input:
-----------------------------------
Original String: Hello, World!
Output:
-------------------------------------
Reversed String: !dlroW ,olleH
*/
#include<stdio.h>
int main(){
    char str[100];
    int i,n;
    
    printf("Original String : ");
    gets(str);
    
    n=sizeof(str)/sizeof(str[100]);
    
    printf("Reversed String : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}

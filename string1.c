/*
Write a C program to remove extra spaces, blanks from a string. How to remove extra blank spaces, 
blanks from a given string using functions in C programming. Logic to remove extra white space characters from a string in C.
*/
/**
 * C program to remove extra blank spaces from a given string
 Output:-
 Enter any string: String      programs in      c
String before removing blanks: 
'String      programs in      c'

String after removing blanks: 
'String programs in c'
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum string size


char * removeBlanks(const char * str);


int main()
{
    char str[MAX_SIZE];
    char * newString;

    printf("Enter any string: ");
    gets(str);

    printf("\nString before removing blanks: \n'%s'", str);

    newString = removeBlanks(str);

    printf("\n\nString after removing blanks: \n'%s'", newString);

    return 0;
}


char * removeBlanks(const char * str)
{
    int i, j;
    char * newString;

    newString = (char *)malloc(MAX_SIZE);

    i = 0;
    j = 0;

    while(str[i] != '\0')
    {
        
        if(str[i] == ' ')
        {
            newString[j] = ' ';
            j++;

           
            while(str[i] == ' ')
                i++;
        }

        newString[j] = str[i];

        i++;
        j++;
    }
    
    newString[j] = '\0';

    return newString;
}

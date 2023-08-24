/*
Write a C program to replace each lowercase letter with the same uppercase letter of a given string. Return the newly created string.

Sample Data:
("Gethub") -> "GETHUB"
("String Program") -> "STRING PROGRAM"
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * test(char * text) {
  if (!text[0])
    return "No string found.";
    char *tt = text;
    while(*tt != '\0')
    {
        if (*tt >= 'a' && *tt  <= 'z')
        {
            *tt = *tt + 'A' - 'a';
        }
        tt++;
    }
    return text;
}
int main() {
 //char text[50] = "";    
 char text[50] = "Gethub";
  //char text[50] = "String Program";
    printf("Original string: %s",text);
    printf("\nReplace all lowercase letter with uppercase string:%s ",test(text));
    return 0;
} 

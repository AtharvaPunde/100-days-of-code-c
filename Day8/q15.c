/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 08  Question: 15
* Date : 29-08-2026 
*
* PROBLEM STATEMENT: 
* Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
*/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);
    if (islower(character))
    { 
        printf("This character is a lowercase alphabet");
    }
    else if (isupper(character))
    { 
        printf("This character is an uppercase alphabet");
    }
    else if (isdigit(character) )
    { 
        printf("This character is a number");
    }
    else
    {
        printf("This character is a special character");
    }
    return 0;
}

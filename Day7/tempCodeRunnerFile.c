/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 07  Question: 14
* Date : 19-08-2026 
*
* PROBLEM STATEMENT: 
* Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    char alph;
    printf("Enter an alphabet: ");
    scanf("%c", &alph);
    if ( alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u' )
    { 
        printf("This alphabet is a vowel");
    }
    else
    {
        printf("This alphabet is a consonant");
    }
    return 0;
}

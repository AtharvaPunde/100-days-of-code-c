/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 07  Question: 13
* Date : 28-08-2026 
*
* PROBLEM STATEMENT: 
* Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d", &year);
    if ( (year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0) )
    { 
        printf("This year is a leap year");
    }
    else
    {
        printf("This year is not a leap year");
    }
    return 0;
}

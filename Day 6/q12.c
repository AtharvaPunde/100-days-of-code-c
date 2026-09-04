/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 07  Question: 13
* Date : 27-08-2026 
*
* PROBLEM STATEMENT: 
* Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    if ( (num > 0))
    { 
        printf("This number is positive");
    }
    if ( (num < 0))
    { 
        printf("This number is negative");
    }
    if (num == 0)
    {
        printf("This number is 0");
    }
    return 0;
}

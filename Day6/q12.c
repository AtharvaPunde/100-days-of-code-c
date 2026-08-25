/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 05  Question: 9
* Date : 17-08-2026 
*
* PROBLEM STATEMENT: 
* Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    { 
        printf("This number is positive");
    }
    if (num < 0) 
    {
        printf("This number is negative");
    }
    if (num == 0)
    {
        printf("This number is 0");
    }
    return 0;
}

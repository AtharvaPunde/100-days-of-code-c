/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 09  Question: 17
* Date : 21-08-2026 
*
* PROBLEM STATEMENT:
* Q17: Write a program to find the roots of a quadratic equation and categorize them.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num1;
    int num2;
    int num3;
    printf("Enter any three numbers: ");
    scanf("%d\n %d\n %d", &num1 , &num2 , &num3 );
    if (num1 > num2 && num1 > num3)
    { 
        printf("The first number is the largest");
    }
    else if (num2 > num1 && num2 > num3) 
    { 
        printf("The second number is the largest");
    }
    else
    {
        printf("The third number is the largest");
    }
    return 0;
}
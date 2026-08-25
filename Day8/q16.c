/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 08  Question: 16
* Date : 20-08-2026 
*
* PROBLEM STATEMENT:
Q16: Write a program to input three numbers and find the largest among them using if–else.
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
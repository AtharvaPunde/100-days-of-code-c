/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 06  Question: 11
* Date : 18-08-2026 
*
* PROBLEM STATEMENT: 
* Q11: Write a program to input an integer and check whether it is even or odd using if–else.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    { 
        printf("This number is even");
    }
    else 
    {
        printf("This number is odd");
    }
    return 0;
}

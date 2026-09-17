/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 15  Question: 29
* Date : 05-09-2026 
*
* PROBLEM STATEMENT:
* Q29: Write a program to calculate the factorial of a number.
*/



#include<stdio.h>
int main()
{
    int n;
    int i;
    int temp = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++ )
    {
        temp = temp*i;
    }
    printf("Product of n numbers is : %d", temp);
    return 0;
}
/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 14  Question: 28
* Date : 04-09-2026 
*
* PROBLEM STATEMENT:
* Q28: Write a program to print the product of even numbers from 1 to n.
*/



#include<stdio.h>
int main()
{
    int n;
    int i;
    int temp = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i= i+2 )
    {
        temp = temp*i;
    }
    printf("Product of n numbers is : %d", temp);
    return 0;
}
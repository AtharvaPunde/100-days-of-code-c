/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 01  Question: 1 
* Date : 22-08-2026 
*
* PROBLEM STATEMENT: 
* Q1: Write a program to input two numbers and display their sum.
*/

#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int sum = (a + b);
    printf("The sum of the two numbers is: %d ", sum );
    return 0;
}
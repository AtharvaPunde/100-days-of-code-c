/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 01  Question: 2 
* Date : 13-08-2026 
*
* PROBLEM STATEMENT: 
* Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
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
    int diff = (a - b);
    int prod = (a * b);
    int div = (a/b);
    printf("The sum of the two numbers is: %d\n ", sum );
    printf("The difference of the two numbers is: %d\n ", diff );
    printf("The product of the two numbers is: %d\n ", prod );
    printf("The division of the two numbers is: %d\n ", div );
    return 0;
}
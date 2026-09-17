/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 14  Question: 27
* Date : 04-09-2026 
*
* PROBLEM STATEMENT:
* Q27: Write a program to print the sum of the first n odd numbers.
*/



#include<stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter n for sum of n numbers: ");
    scanf("%d", &n);
    sum = (n*(n+1))/2;
    printf("Sum of %d natural numbers is %d", n , sum );
    return 0;
}
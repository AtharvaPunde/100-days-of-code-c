/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 04  Question: 8
* Date : 16-08-2026 
*
* PROBLEM STATEMENT: 
* Q8: Write a program to find and display the sum of the first n natural numbers.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter n for the sum of n natural numbers : ");
    scanf("%d", &n);
    double sum = ((n*(n+1))/2);
    printf("The Sum of n natural numbers is : %lf", sum);
    return 0;
}
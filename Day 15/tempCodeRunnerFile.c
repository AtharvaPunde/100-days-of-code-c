/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 15  Question: 29
* Date : 05-09-2026 
*
* PROBLEM STATEMENT:
* Q30: Write a program to reverse a given number.
*/



#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int quo = n/10;
    int rem = n%10;
    int new = rem*10 + quo;
    printf("The number reversed is : %d", new);
    return 0;
}
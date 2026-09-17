/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 15  Question: 30
* Date : 05-09-2026 
*
* PROBLEM STATEMENT:
* Q30: Write a program to reverse a given number.
*/


#include<stdio.h>
int main()
{
    int n;
    int rem, rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n != 0; n = n / 10) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    printf("The number reversed is : %d", rev);
    return 0;
}
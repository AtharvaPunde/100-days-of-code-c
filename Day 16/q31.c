/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 16  Question: 31
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
* Q31: Write a program to take a number as input and print its equivalent binary representation.
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
/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 16  Question: 32
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
* Q32: Write a program to check if a number is a palindrome.
*/



#include<stdio.h>
int main()
{
    int n, original;
    int rem, rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    for (; n != 0; n = n / 10) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    printf("The number reversed is : %d", rev);
    return 0;
}
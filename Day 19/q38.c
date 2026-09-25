/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 19  Question: 37
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
*Q38: Write a program to find the sum of digits of a number.
*/

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        digit = num % 10;
        sum += digit;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
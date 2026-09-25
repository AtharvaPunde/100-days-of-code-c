/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 19  Question: 37
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
*Q37: Write a program to find the LCM of two numbers.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int larger, lcm;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;
    lcm = larger;

    while (lcm % a != 0 || lcm % b != 0) {
        lcm += larger;
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}
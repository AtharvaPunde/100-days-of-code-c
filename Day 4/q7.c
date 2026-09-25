/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 04  Question: 7
* Date : 25-08-2026 
*
* PROBLEM STATEMENT: 
* Q7: Write a program to swap two numbers without using a third variable.
*/

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d\n", a, b);
    return 0;
}
/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 02  Question: 3 
* Date : 25-08-2026 
*
* PROBLEM STATEMENT: 
* Q7: Write a program to swap two numbers without using a third variable.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double c;
    printf("Enter temperature in Celsius : ");
    scanf("%lf", &c);
    double f = ((c * 9/5) + 32);
    printf("The temperature in fahrenheit is : %lf", f);
    return 0;
}
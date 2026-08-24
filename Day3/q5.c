/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 03  Question: 5
* Date : 15-08-2026 
*
* PROBLEM STATEMENT: 
* Q5: Write a program to convert temperature from Celsius to Fahrenheit.
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
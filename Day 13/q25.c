/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 13  Question: 25
* Date : 03-09-2026 
*
* PROBLEM STATEMENT:
* Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/



#include<stdio.h>
int main()
{
int a;
int b;
printf("Enter two numbers: ");
scanf("%d\n %d", &a , &b);
int add = a + b;
int sub = a - b;
int mul = a * b;
int div = a / b;
int mod = a % b;
printf("The addition of the two numbers is %d\n", add );
printf("The subtraction of the two numbers is %d\n", sub );
printf("The multiplication of the two numbers is %d\n", mul );
printf("The division of the two numbers is %d\n", div );
printf("The remainder after division of the two numbers is %d\n", mod );
return 0;
}
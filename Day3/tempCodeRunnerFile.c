/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 02  Question: 3 
* Date : 14-08-2026 
*
* PROBLEM STATEMENT: 
* Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    
    int temp = a;
    a = b;
    b = temp;
    printf("The two numbers you entered are : %d and %d", a , b);
    return 0;
}
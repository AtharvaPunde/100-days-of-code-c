/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 03  Question: 6
* Date : 15-08-2026 
*
* PROBLEM STATEMENT: 
* Q6: Write a program to swap two numbers using a third variable.
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
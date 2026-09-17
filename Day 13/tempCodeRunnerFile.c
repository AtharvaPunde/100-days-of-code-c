/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 13  Question: 26
* Date : 03-09-2026 
*
* PROBLEM STATEMENT:
* Q26: Write a program to print numbers from 1 to n.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int i;
    int temp = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++ )
    {
        temp = temp+i;
    }
    printf("Product of n numbers is : %d", temp);
    return 0;
}
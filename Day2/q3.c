/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 02  Question: 3 
* Date : 14-08-2026 
*
* PROBLEM STATEMENT: 
* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include<stdio.h>
int main()
{
    int l;
    int b;
    printf("Enter the length of the rectangle : ");
    scanf("%d/n", &l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d/n", &b);
    int area = (l * b);
    int peri = (2 * (l+b));
    printf("Perimeter of the rectangle is : %d\n", peri);
    printf("Area of the rectangle is : %d", area);
    return 0;
}
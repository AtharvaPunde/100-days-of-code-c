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
    double r;
    printf("Enter the radius of the circle : ");
    scanf("%lf\n", &r);
    double r2 = pow(r,2);
    double area = (3.14 * r2);
    double peri = (2 * 3.14 * r);
    printf("Perimeter of the circle is : %lf\n", peri);
    printf("Area of the circle is : %lf", area);
    return 0;
}
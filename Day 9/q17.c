/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 09  Question: 17
* Date : 30-08-2026 
*
* PROBLEM STATEMENT:
* Q17: Write a program to find the roots of a quadratic equation and categorize them.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the coefficients :  ");
    scanf("%d\n %d\n %d", &a , &b , &c );
    double d = (b*b - 4*a*c);
    if(d == 0)
    {
        printf("The roots are real and equal\n");
    }
    else if(d > 0)
    {
        printf("The roots are real and different\n");
    }
    else
    { 
        printf("The roots are complex\n");
    }
    double temp = pow(temp, 1/2);
    double root1 = ((-b - temp)/2*a);
    double root2 = ((-b + temp)/2*a);
    printf("The roots of the quadratic equation are : %lf and % lf", root1 , root2);
    return 0;
}
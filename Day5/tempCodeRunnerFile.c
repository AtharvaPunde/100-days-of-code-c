/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 05  Question: 9
* Date : 17-08-2026 
*
* PROBLEM STATEMENT: 
* Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    int r;
    int t;
    printf("Enter the principal amount : ");
    scanf("%d", &p);
    printf("Enter the rate of interest : ");
    scanf("%d", &r);  
    printf("Enter the time period : ");
    scanf("%d", &t);
    double simp = ((p * r * t)/100);
    printf("The Simple interest for Principal Amount of Rupees %d, Rate %d percent and time %d years is : %2f\n", p,r,t,simp);
    int n;
    printf("Enter the number of times interest is compounded per year : ");
    scanf("%d", &n);
    int temp1 = (1 + (r/n));
    int temp2 = pow(temp1,n*t);
    double comp = (((p * temp2) - p)/100);
    printf("The Compound interest for Principal Amount of Rupees %d, Rate %d percent and time %d years is : %2f\n", p,r,t,comp);
    return 0;
}
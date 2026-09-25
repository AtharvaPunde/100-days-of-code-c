/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 18  Question: 36
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
* Q36: Write a program to find the HCF (GCD) of two numbers.
*/

#include<stdio.h>
#include<math.h>
int main()
{
  int num1, num2;
  int hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d\n %d", &num1, &num2);
    int smaller = num1<num2 ? num1 : num2;
    for(int i = 1 ; i <= smaller ; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        hcf = i;  
    }
printf("HCF = %d", hcf);
return 0;
}
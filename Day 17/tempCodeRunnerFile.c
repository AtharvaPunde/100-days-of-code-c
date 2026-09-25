/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 17  Question: 34
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
* Q34: Write a program to check if a number is prime.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num==1)
    printf("Neither prime nor composite");
    else
    {
        for(int i=2 ; i < num/i ; i++)
    {
        if(num % i ==0)
        {printf("The number is not prime");
        break;}
        else
        printf("The number prime");
    }
}
return 0;
}

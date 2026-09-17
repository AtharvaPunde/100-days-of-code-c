/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 16  Question: 32
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
* Q32: Write a program to check if a number is a palindrome.
*/



#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int original;
    int temp;
    int t = 0;
    int rem, arm = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    do 
    {
        n = n/10;
        t++;
    } while (n != 0);
    
    for (;temp!=0; temp = temp/10)
    {
        rem = temp % 10;
        arm = arm + (int)round(pow(rem, t));
    }
    if (arm == original)
    {
        printf("Armstrong Number");
    }
    else 
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}
/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 18  Question: 35
* Date : 06-09-2026 
*
* PROBLEM STATEMENT:
* Q35: Write a program to print all factors of a given number.
*/



#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factors of %d are :\n", num);
    for(int i = 1 ; i <= num ; i++)
    {
        if(num % i == 0)
        printf("%d ", i);
    }
    return 0;
}
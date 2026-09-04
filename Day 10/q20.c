/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 10  Question: 20
* Date : 31-08-2026 
*
* PROBLEM STATEMENT:
* Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the day number between 1 and 7 :");
    scanf("%d", &num );
    if (num == 1)
    {
        printf("The day is Monday");
    }
    else if (num == 2)
    {
        printf("The day is Tuesday");
    }
    else if (num == 3)
    {
        printf("The day is Wednesday");
    }
    else if (num == 4)
    {
        printf("The day is Thursday");
    }
    else if (num == 5)
    {
        printf("The day is Friday");
    }
    else if (num == 6)
    {
        printf("The day is Saturday");
    }
    else if (num == 7)
    {
        printf("The day is Sunday");
    }
    return 0;
}

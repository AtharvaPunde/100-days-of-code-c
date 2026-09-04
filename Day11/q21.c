/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 11  Question: 21
* Date : 01-09-2026 
*
* PROBLEM STATEMENT:
* Q21: Write a program to display the month name and number of days using switch-case for a given month number.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the number of month: ");
    scanf("%d", &num);
    if (num == 1)
    {printf("January\n");}
    else if (num == 2)
    {printf("February\n");}
    else if (num == 3)
    {printf("March\n");}
    else if (num == 4)
    {printf("April\n");}
    else if (num == 5)
    {printf("May\n");}
    else if (num == 6)
    {printf("June\n");}
    else if (num == 7)
    {printf("July\n");}
    else if (num == 8)
    {printf("August\n");}
    else if (num == 9)
    {printf("September\n");}
    else if (num == 10)
    {printf("October\n");}
    else if (num == 11)
    {printf("November\n");}
    else if (num == 12)
    {printf("December\n");}
    
if (num == 2)
    {
        int year;
        printf("Enter the year: ");
        scanf("%d", &year);
         if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            printf("No. of days = 29");
        else
            printf("No. of days = 28");
    }
    else if (num == 4 || num == 6 || num == 9 || num == 11)
    {
        printf("No. of days = 30");
    }
    else if (num == 1 || num == 3 || num == 5 || num == 7 ||
             num == 8 || num == 10 || num == 12)
    {
        printf("No. of days = 31");
    }
return 0;
}

    


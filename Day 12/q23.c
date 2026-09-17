/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 12  Question: 23
* Date : 02-09-2026 
*
* PROBLEM STATEMENT:
* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int late;
    printf("Enter how many days late you are: ");
    scanf("%d", &late);
    if (late<=5)
    {
        int temp1 = (2*late);
        printf("Late fees : %d", temp1);
    }
    else if (late>5 && late<=10)
    {
        int temp2 = 10 +  (4*(late-5));
        printf("Late fees : %d", temp2);
    }
    else if (late>10 && late<=30)
    {
        int temp3 = 30 + (6*(late-10));
        printf("Late fees : %d", temp3);
    }
    else if (late>30)
    {
        int temp4 = 150;
        printf("Late fees : %d\n", temp4);
        printf("Your membership has been cancelled");
    }
    return 0;
}
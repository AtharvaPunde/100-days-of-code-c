/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 05  Question: 10
* Date : 26-08-2026 
*
* PROBLEM STATEMENT: 
* Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int time;
    printf("Enter the time period in seconds: ");
    scanf("%d", &time);
    int hours = time / 3600;
    int temp1 = time % 3600;
    int mins = temp1 / 60;
    int secs = temp1 % 60;
    printf("The in hour:mins:secs format is %d:%d:%d", hours, mins, secs);
    return 0;
}

/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 09  Question: 18
* Date : 21-08-2026 
*
* PROBLEM STATEMENT:
* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
  90-100: Grade A 
  80-89: Grade B 
  70-79: Grade C 
  60-69: Grade D 
  below 60: Grade F.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int per;
    printf("Enter your percentage :  ");
    scanf("%d", &per );
    if ( per > 90 && per < 100)
    {
        printf("Grade A");
    }
    else if ( per > 80 && per < 90)
    {
        printf("Grade B");
    }
    else if ( per > 70 && per < 80)
    {
        printf("Grade C");
    }
    else if ( per > 60 && per < 70)
    {
        printf("Grade D");
    }
    else if ( per < 60)
    {
        printf("Fail");
    }
    return 0;
}
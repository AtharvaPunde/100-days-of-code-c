/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 12  Question: 24
* Date : 02-09-2026 
*
* PROBLEM STATEMENT:
* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/



#include<stdio.h>
#include<math.h>
int main()
{
    int unit;
    printf("Enter no. of units used: ");
    scanf("%d", &unit);
    if (unit<=100)
    {
        int temp1 = (5*unit);
        printf("Bill : %d", temp1);
    }
    else if (unit>100 && unit<=200)
    {
        int temp2 = 500 +  (7*(unit-100));
        printf("Bill : %d", temp2);
    }
    else if (unit>200 && unit<=300)
    {
        int temp3 = 1200 + (10*(unit-200));
        printf("Bill : %d", temp3);
    }
    else if (unit>300)
    {
        int temp4 = 2200 + (12*(unit-300));
        printf("Bill : %d", temp4);
    }
    return 0;
}
/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 11  Question: 22
* Date : 01-09-2026 
*
* PROBLEM STATEMENT:
* Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/

#include<stdio.h>
#include<math.h>
int main()
{ 
    int sell;
    int cost;
    int cut;
    printf("Enter the Cost and the Selling price: ");
    scanf("%d\n %d", &cost, &sell);
    int l = (sell - cost);
    cut = (l*100)/cost ;
    if (cut>0)
    {
        printf("The profit is %d percent", cut);
    }
    else if (cut<0)
    {
        printf("The loss is %d percent", cut);
    }
    else if(cut ==0)
    {
        printf("There is no profit or loss");
    }
    return 0;
}
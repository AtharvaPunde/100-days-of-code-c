/* 
* Name : Atharva Punde 
* Roll : 560041860
* Day  : 10  Question: 19
* Date : 31-08-2026 
*
* PROBLEM STATEMENT:
* Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the three sides of the triangle :");
    scanf("%d\n %d\n %d", &a , &b , &c );
    if (( a == b) && (a == c))
    {
        printf("The Triangle is Equilateral");
    }
    else if (( a == b) && (a != c) || ( a != b) && (a == c ))
    {
        printf("The Triangle is Isosceles");
    }
    else if (( a != b) && (a != c))
    {
        printf("The Triangle is Scalene");
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
int n,rem,t=0, i= 1;
int sum = 0;
int og, temp, temp1;
printf("Enter n: ");
scanf("%d", &n);
og = n;
temp = n;
temp1 = n;
int power = 1;
while (temp1 !=0)
{
temp1 = (temp1 / 10);
t++;
}

for (temp = n ; temp!=0 ; temp = temp/10)
{
rem = temp % 10;
int power = 1;
for (i = 1; i<= t ; i++)
{
    power = power*rem;
}
sum = sum + power;
}
if (og == sum)
printf("The number is an armstrong number");
else
printf("The number is not an armstrong number");
return 0;
}
#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main()
{
    int n, original, temp, t = 0, rem, arm = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    do
    {
        temp = temp / 10;
        t++;
    } while (temp != 0);

    temp = n;

    for (; temp != 0; temp = temp / 10)
    {
        rem = temp % 10;
        arm = arm + power(rem, t);
    }

    if (arm == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
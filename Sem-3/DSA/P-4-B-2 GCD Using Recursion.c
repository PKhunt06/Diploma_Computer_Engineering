// P-4-B-2 Write a program to find GCD of a given number using recursion.

#include <stdio.h>

int gcd(int a, int b)
{
    if(a == b)
    {
        return a;
    }
    else if(a > b)
    {
        return gcd(a - b, b);
    }
    else
    {
        return gcd(a, b - a);
    }
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = gcd(a, b);

    printf("GCD of %d and %d = %d", a, b, result);

    return 0;
}

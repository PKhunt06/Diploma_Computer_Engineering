// P-4-B Implement recursive functions.
// P-4-B-1 Write a program to find factorial of a given number using recursion.

#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial of %d = %d", n, result);

    return 0;
}

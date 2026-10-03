// P-5-A Implement simple structure programs using pointers.
// P-5-A-1 Write a program using pointer.

#include <stdio.h>

int main()
{
    int n;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;

    printf("\nValue of n = %d", n);
    printf("\nAddress of n = %p", (void *)&n);
    printf("\nAddress stored in pointer = %p", (void *)p);
    printf("\nValue using pointer = %d", *p);

    return 0;
}

// P-5-A Implement simple structure programs using pointers.
// P-5-A-1 Write a program using pointer.

#include <stdio.h>

int main()
{
    int n;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &n);

    ptr = &n;

    printf("\nValue of n = %d", n);
    printf("\nAddress of n = %p", (void *)&n);
    printf("\nValue stored in pointer = %p", (void *)ptr);
    printf("\nValue using pointer = %d", *ptr);

    return 0;
}

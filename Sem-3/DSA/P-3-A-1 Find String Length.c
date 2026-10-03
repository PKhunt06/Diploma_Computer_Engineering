// P-3 Implement various string algorithms.
// P-3-A-1 Implement a program to find the length of given string

#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length of string
    while(str[count] != '\0')
    {
        count++;
    }

    printf("Length of string = %d", count);

    return 0;
}

// P-3-A-2 Write a source code to convert the given string into lower case.

#include <stdio.h>

int main()
{
    char s1[100];
    int i = 0;

    printf("Enter a string: ");
    gets(s1);

    // Convert uppercase characters into lowercase
    while(s1[i] != '\0')
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }

        i++;
    }

    printf("String in lowercase = %s", s1);

    return 0;
}

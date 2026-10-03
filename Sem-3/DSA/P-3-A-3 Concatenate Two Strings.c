// P-3-A-3 Write a source code to concatenate two strings into third one.

#include <stdio.h>

int main()
{
    char s1[100], s2[100], s3[200];
    int count1 = 0, count2 = 0, count3 = 0;

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    // Copy first string into third string
    while(s1[count1] != '\0')
    {
        s3[count3] = s1[count1];

        count1++;
        count3++;
    }

    // Copy second string into third string
    while(s2[count2] != '\0')
    {
        s3[count3] = s2[count2];

        count2++;
        count3++;
    }

    // Add NULL character at the end
    s3[count3] = '\0';

    printf("Concatenated string = %s", s3);

    return 0;
}

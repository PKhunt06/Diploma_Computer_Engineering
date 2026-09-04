// Extra-P-2 Write a program to demonstrate use of following <string.h> library
// i) strlen() ii) strcmp() iii) strcat() iv) strrev() v) strcpy()

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str1[100],str2[100];

clrscr();

printf("Enter first string:-\t");
gets(str1);

printf("Enter second string:-\t");
gets(str2);

/* strlen() */
printf("\nLength of first string = %d",strlen(str1));
printf("\nLength of second string = %d",strlen(str2));

/* strcmp() */
if(strcmp(str1,str2)==0)
{
    printf("\nBoth strings are equal.");
}
else
{
    printf("\nBoth strings are not equal.");
}

/* strcpy() */
strcpy(str2,str1);

printf("\n\nAfter strcpy():");
printf("\nSecond string = %s",str2);

/* strcat() */
strcat(str1,str2);

printf("\n\nAfter strcat():");
printf("\nFirst string = %s",str1);

/* strrev() */
strrev(str1);

printf("\n\nAfter strrev():");
printf("\nReverse string = %s",str1);

getch();
}

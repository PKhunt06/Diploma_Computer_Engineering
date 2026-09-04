// P-21-C Write a program to compare two strings to check whether they are equal or not.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[25], st1[25];
clrscr();
printf("\nEnter string1:-\t");
gets(st);
printf("\nYou entered:-\t");
puts(st);
printf("\nEnter string2:-\t");
gets(st1);
printf("\nYou entered:-\t");
puts(st1);
if(strcmp(st,st1)==0)
{
printf("\nStrings are equal...");
}
else
{
printf("\nStrings are not equal...");
}
getch();
}

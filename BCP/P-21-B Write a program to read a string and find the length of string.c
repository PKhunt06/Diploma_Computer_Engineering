// P-21-B Write a program to read a string and find the length of string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[25];
int count=0, i;
clrscr();
printf("\nEnter a String:-\t");
gets(st);
printf("\nYou Entered:-\t");
puts(st);
printf("\nLength of given string using \"String inbuilt function\" is:-\t%d",strlen(st));
for(i=0;st[i]!='\0';i++)
{
count++;
}
printf("\nLength of given string without using \"String inbuilt function\" is:-\t%d",count);
getch();
}

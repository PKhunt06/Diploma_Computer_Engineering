// P-21-A Design and test a C program to test various inbuilt string functions. (a)Write a program to read and print two different strings.

#include<stdio.h>
#include<conio.h>
void main()
{
char st[25], st1[25];
clrscr();
printf("\nEnter String using gets() function:-\t");
gets(st);
printf("\nYou Entered:-\t");
puts(st);
printf("\n\nEnter String using scanf() function:-\t");
scanf("%s",st1);
printf("\nYou Entered:-\t%s",st1);
getch();
}

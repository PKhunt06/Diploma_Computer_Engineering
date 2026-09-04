// P-18-A Design and test at C programs using pointers. (a)Write a program to create and initialize integer pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
int n, *ptr;
clrscr();
printf("\nEnter value of n:-\t");
scanf("%d",&n);
ptr=&n;
printf("\nValue of n:-\t%d",n);
printf("\nAddress of n using ptr variable:-\t%d",ptr);
printf("\nValue of n using ptr variable:-\t%d",*ptr);
getch();
}

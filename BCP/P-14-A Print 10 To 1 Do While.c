// P-14-A Design and test C programs using do...while loop. (a)Write a program to print 10 to 1 number using do while loop.

#include<stdio.h>
#include<conio.h>
void main()
{
int i=10;
clrscr();
do
{
printf("%d\t",i);
i--;
}while(i>0);
getch();
}

// P-12-A Design and test at least C programs using for loop. (a)Write a Program to find Factorial of a given No.

#include<stdio.h>
#include<conio.h>
void main()
{
int i, fact=1, num;
clrscr();
printf("\nEnter a number:-\t");
scanf("%d",&num);
printf("\n\nYou Entered:-\t%d",num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\nFactorial of given number %d! is =\t%d",num,fact);
getch();
}

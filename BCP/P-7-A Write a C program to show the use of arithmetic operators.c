// P-7-A Design and test C programs to using enlisted operators: (a) Write a C program to show the use of arithmetic operators.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter value of a:-\t");
scanf("%d",&a);
printf("Enter value of b:-\t");
scanf("%d",&b);
printf("\n\nAddition of a \"%d\" + b \"%d\" is = \"%d\"",a,b,a+b);
printf("\nSubtraction of a \"%d\" - b \"%d\" is = \"%d\"",a,b,a-b);
printf("\nDivision of a \"%d\" / b \"%d\" is = \"%d\"",a,b,a/b);
printf("\nMultiplication of a \"%d\" * b \"%d\" is = \"%d\"",a,b,a*b);
printf("\nReminder of a \"%d\" 0/0 b \"%d\" is = \"%d\"",a,b,a%b);
getch();
}

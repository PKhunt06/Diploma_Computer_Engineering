// P-19-A Design and test C programs using user defined functions. (a)Write a program to create a function for addition of two nos.

#include<stdio.h>
#include<conio.h>
void sum(); //declaration of function...
void main()
{
clrscr();
sum(); //calling of function...
sum(); //calling of function...
getch();
}
void sum() //defination of the function...
{
int a, b, sum;
printf("\n\nEnter Value of a:-");
scanf("%d",&a);
printf("\nEnter Value of b:-");
scanf("%d",&b);
sum=a+b;
printf("%d\t+\t%d\t=\t%d",a,b,sum);
}

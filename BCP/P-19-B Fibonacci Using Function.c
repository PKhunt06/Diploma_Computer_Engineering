// P-19-B Write a program to create a function to print Fibonacci series

#include<stdio.h>
#include<conio.h>
void fibo(int n)//function declaration with defination
{
int a=0, b=1, c, i;
printf("%d\t%d\t",a,b);
for(i=2;i<n;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
}
void main()
{
int n;
clrscr();
printf("\nEnter value of n:-\t");
scanf("%d",&n);
fibo(n);
getch();
}

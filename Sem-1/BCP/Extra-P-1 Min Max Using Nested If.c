// Extra-P-1 Write a program to find minimum and maximum from a given 3 numbers using nested if statement.

#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,max,min;

clrscr();

printf("Enter first number:-\t");
scanf("%d",&a);

printf("Enter second number:-\t");
scanf("%d",&b);

printf("Enter third number:-\t");
scanf("%d",&c);

if(a>b)
{
    if(a>c)
    {
        max=a;
    }
    else
    {
        max=c;
    }
}
else
{
    if(b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
}

if(a<b)
{
    if(a<c)
    {
        min=a;
    }
    else
    {
        min=c;
    }
}
else
{
    if(b<c)
    {
        min=b;
    }
    else
    {
        min=c;
    }
}

printf("\nMaximum number = %d",max);
printf("\nMinimum number = %d",min);

getch();
}

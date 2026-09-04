// P-7-B Write a program to find whether given year is leap year or not.

#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\n\nEntert any Year:-\t");
scanf("%d",&year);
if(year%4==0)
{
printf("\n\"%d\" is a Leap Year...\n",year);
}
else
{
printf("\n\"%d\" is not a Leap Year...\n",year);
}
getch();
}

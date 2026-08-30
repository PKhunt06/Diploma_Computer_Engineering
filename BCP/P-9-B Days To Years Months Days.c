// P-9-B Write a program to enter days and convert it into year, month and days.

#include<stdio.h>
#include<conio.h>
void main()
{
int n, yr, mo, wk, days; //n=number of days, yr=years, mo=months, wk=weeks, days=remaining
days
clrscr();
printf("\nEnter no. of days:-\t\t");
scanf("%d",&n);
printf("\nTotal no. of given Days:-\t%d",n);
printf("\n\n");
yr=n/365;
printf("Total Years:-\t\t%d\n",yr);
n=n%365;
mo=n/30;
printf("Total Months:-\t\t%d\n",mo);
n=n%30;
wk=n/7;
printf("Total Weeks:-\t\t%d\n",wk);
n=n%7;
days=n;
printf("Remaining Days:-\t%d\n",days);
getch();
}

// P-13-A Design and test C programs using the while loop. (a)Write a Program to display palindrome number.

#include<stdio.h>
#include<conio.h>
void main()
{
int n, org, rev=0, r;
clrscr();
printf("\nEnter any number:-\t");
scanf("%d",&n);
org=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n/=10;
}
printf("\n\nOriginal number is:-\t%d",org);
printf("\nReverse number is:-\t%d",rev);
if(org==rev)
{
printf("\n\nGiven number is Palindrome...");
}
else
{
printf("\n\nGiven number is Not Palindrome...");
}
getch();
}

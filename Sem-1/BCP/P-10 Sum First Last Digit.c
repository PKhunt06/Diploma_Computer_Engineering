// P-10 Write a C program to find sum of first and last digit of number.

#include<stdio.h>
#include<conio.h>
void main()
{
int n, fd, ld, sum; //n=given number, fd=first digit, ld=last digit, sum=ld+fd
clrscr();
printf("\nEnter any number:-\t");
scanf("%d",&n);
printf("\n\nGiven number is:-\t%d",n);
ld=n%10;
while(n>=10)
{
n=n/10;
}
fd=n;
sum=fd+ld;
printf("\nLast Digit of given number is:-\t\t%d",ld);
printf("\nFirst Digit of given number is:-\t%d",fd);
printf("\nSum of First and Last digit i.e., \n%d + %d = %d",fd,ld,sum);
getch();
}

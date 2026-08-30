// P-13-B Write a Program to display Sum of digits.

#include<stdio.h>
#include<conio.h>
void main()
{
int n, num, sum=0;
clrscr();
printf("\nEnter any number:-\t");
scanf("%d",&num);
printf("\n\nYou entered:-\t%d",num);
while(num>0)
{
n=num%10;
sum=sum+n;
num=num/10;
}
printf("\nSum of digits of given number is:-\t%d",sum);
getch();
}

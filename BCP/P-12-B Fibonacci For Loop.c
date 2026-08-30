// P-12-B Write a Program which Generate Fibonacci Series.

#include<stdio.h>
#include<conio.h>
void main()
{
int n=0,n1=1,i,num,sum;
clrscr();
printf("Enter a number:-\t");
scanf("%d",&num);
printf("\nYou entered:-\t%d",num);
printf("\n\nFibonacci Series is as followed----\n");
printf("%d\t%d\t",n,n1);
for(i=3;i<=num;i++)
{
sum=n+n1;
printf("%d\t",sum);
n=n1;
n1=sum;
}
getch();
}

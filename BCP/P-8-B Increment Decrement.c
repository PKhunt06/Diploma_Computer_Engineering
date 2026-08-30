// P-8-B Write a program to generate 0 – 10 using unary increment & decrement operator.

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Using Increment operator:--------\n");
for(i=0;i<=10;i++)
{
printf("%d\t",i);
}
printf("\n\n");
printf("Using Decrement operator:--------\n");
for(i=10;i>=0;i--)
{
printf("%d\t",i);
}
getch();
}

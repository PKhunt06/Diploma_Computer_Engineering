// P-14-B Write a program to print numbers between 1 and 100 which are multiple of 3 using the do while loop

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
do
{
if(i%3==0)
{
printf("%d\t",i);
}
i++;
}while(i<=100);
getch();
}

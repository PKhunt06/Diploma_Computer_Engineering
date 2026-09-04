// P-17-A Design and test at C programs using one & Two dimensional array. (a)Write a program to print SUM of any 10 numbers using One-D array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], sum=0, i;
clrscr();
printf("\nEnter 10 values for array-----\n");
for(i=0;i<10;i++)
{
printf("a[%d]=\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum=sum+a[i];
}
printf("\nTo display elements stored in Array-----\n");
for(i=0;i<10;i++)
{
printf("a[%d]=%d\t",i,a[i]);
}
printf("\nSum of all elements stored in array is:-\t%d",sum);
getch();
}

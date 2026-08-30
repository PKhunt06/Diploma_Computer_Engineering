// P-17-B Write a program to add two matrix of size 3X3 2-D array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3], b[3][3], c[3][3], i, j;
clrscr();
printf("\nEnter value of 3X3 matrix A:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter value of 3X3 matrix B:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nMatrix A:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nMatrix B:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("\nMatrix C=A+B:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}

// P-15 Write a program to show the use of break and continue statements.

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("\n\nUse of \"break\" keyboard-----\n");
for(i=1;i<=10;i++)
{
if(i==4)
{
break;
}
printf("%d\t",i);
}
printf("\n\n");
printf("\n\nUse of \"continue\" keyboard-----\n");
for(i=1;i<=10;i++)
{
if(i==4)
{
continue;
}
printf("%d\t",i);
}
getch();
}

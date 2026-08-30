// P-25 Write a program to show the use of enum and typedef.

#include<stdio.h>
#include<conio.h>
typedef int K;
typedef float R;
void main()
{
enum week{mon,tue,wed=5,thu,fri=-1,sat,sun};
K a=5;
R b=5.5;
clrscr();
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d",mon,tue,wed,thu,fri,sat,sun);
printf("\n\nValue of a is:-\t%d",a);
printf("\n\nValue of b is:-\t%.2f",b);
getch();
}

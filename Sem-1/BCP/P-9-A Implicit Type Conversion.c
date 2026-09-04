// P-9-A Design and test C programs for: (a) Implicit type conversion.

#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
char b='A';
int c=a+b; //Implicit type conversion, b is char variable converted to interger (ASCII Value)
clrscr();
printf("\nValue of a:-\t\t%d",a);
printf("\nValue of b:-\t\t%c",b);
printf("\nValue of c=a+b:-\t%d",c);
getch();
}

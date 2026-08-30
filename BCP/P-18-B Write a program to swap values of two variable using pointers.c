// P-18-B Write a program to swap values of two variable using pointers.

#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, *ptr1, *ptr2, tmp;
clrscr();
printf("Enter value of a:-\t");
scanf("%d",&a);
printf("\nEnter value of b:-\t");
scanf("%d",&b);
printf("\n\nValues of a & b before Swaping-----\n");
printf("\nValue of a:-\t%d",a);
printf("\nValue of b:-\t%d",b);
ptr1=&a;
ptr2=&b;
tmp=*ptr1;
*ptr1=*ptr2;
*ptr2=tmp;
printf("\n\nValues of a & b after Swaping-----\n");
printf("\nValue of a:-\t%d",a);
printf("\nValue of b:-\t%d",b);
getch();
}

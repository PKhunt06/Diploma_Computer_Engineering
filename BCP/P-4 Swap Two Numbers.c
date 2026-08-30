// P-4 Design and test a C program to swap 2 numbers using a third variable and without using a third variable.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c; //declaration of variables...
clrscr();
printf("Enter value of a:-");
scanf("%d",&a);
printf("Enter value of b:-");
scanf("%d",&b);
printf("\noriginal Value of a:-\t%d",a);
printf("\noriginal Value of b:-\t%d",b);
printf("\n\nSwap using third variable-----\n\n");
//Logic...
c=a;
a=b;
b=c;
printf("\nValue of a after swap:-\t%d",a);
printf("\nValue of b after swap:-\t%d",b);
printf("\n\n-------------------------------------------");
printf("\n\nNow original Value of a:-\t%d",a);
printf("\norNow iginal Value of b:-\t%d",b);
printf("\n\nSwap without using third variable-----\n\n");
//Logic...
a=a+b;
b=a-b;
a=a-b;
printf("\nValue of a after swap:-\t%d",a);
printf("\nValue of b after swap:-\t%d",b);
getch();
}

// P-7-C Find the maximum and minimum number from three numbers given by user using Logical operator.

#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;
clrscr();
printf("\nEnter value of a:-\t");
scanf("%d",&a);
printf("\nEnter value of b:-\t");
scanf("%d",&b);
printf("\nEnter value of c:-\t");
scanf("%d",&c);
printf("\n\nValue of A is\t\"%d\"",a);
printf("\nValue of B is\t\"%d\"",b);
printf("\nValue of C is\t\"%d\"",c);
if(a>b && a>c)
{
printf("\n\n%d is Maximum\n",a);
}
else if(b>c)
{
printf("\n\n%d is Maximum\n",b);
}
else
{
printf("\n\n%d is Maximum\n",c);
}
if(a<b && a<c)
{
printf("\n%d is Minimum\n",a);
}
else if(b<c)
{
printf("\n%d is Minimum\n",b);
}
else
{
printf("\n%d is Minimum\n",c);
}
getch();
}

// P-8-A Design and test C programs using the enlisted operators: (a) Write a program that will perform bit-wise operations on variable.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter value of a:-\t");
scanf("%d",&a);
printf("Enter value of b:-\t");
scanf("%d",&b);
printf("\nValue of a:-\t%d",a);
printf("\nValue of b:-\t%d",b);
printf("\n\nUse of bitwise operators------\n");
printf("Bitwise AND a&b:-\t%d\n",a&b);
printf("Bitwise OR a|b:-\t%d\n",a|b);
printf("Bitwise EX-OR a^b:-\t%d\n",a^b);
printf("Bitwise LEFT-SHIFT a<<b:-\t%d\n",a<<b);
printf("Bitwise RIGHT-SHIFT a>>b:-\t%d\n",a>>b);
getch();
}

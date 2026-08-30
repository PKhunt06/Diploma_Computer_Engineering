// P-11-A Design and test C programs using decision making statements: (a) Make a calculator using switch-case pattern.

#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, ch, mod;
float sum, sub, mul, div;
clrscr();
printf("\nEnter value of a:-\t");
scanf("%d",&a);
printf("\nEnter value of b:-\t");
scanf("%d",&b);
printf("\n\nEnter 1. for Addition.");
printf("\nEnter 2. for Subtraction.");
printf("\nEnter 3. for Multiplication.");
printf("\nEnter 4. for Division.");
printf("\nEnter 5. for Mode / Reminder.");
printf("\n");
printf("\nEnter your choice:-\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
sum=a+b;
printf("\nSum=\t%.2f",sum);
break;
}
case 2:
{
sub=a-b;
printf("\nSub=\t%.2f",sub);
break;
}
case 3:
{
mul=a*b;
printf("\nMul=\t%.2f",mul);
break;
}
case 4:
{
div=b/a;
printf("\nDiv=\t%.2f",div);
break;
}
case 5:
{
mod=a%b;
printf("\nMod=\t%.2f",mod);
break;
}
default:
{
printf("\nInvalid choice...");
}
}
getch();
}

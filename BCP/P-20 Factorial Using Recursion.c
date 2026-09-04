// P-20 Write a program to find factorial of a given no using recursion.

#include<stdio.h>
#include<conio.h>
int fact(int n); //Declaration of function...
void main()
{
int n;
clrscr();
printf("\nEnter any number:-\t");
scanf("%d",&n);
printf("\nFactorial of given number \"%d!\"=\t\"%d\"",n,fact(n)); //fact(n) is function calling...
printf("\n\nEnter any number:-\t");
scanf("%d",&n);
printf("\nFactorial of given number \"%d!\"=\t\"%d\"",n,fact(n));
printf("\n\nEnter any number:-\t");
scanf("%d",&n);
printf("\nFactorial of given number \"%d!\"=\t\"%d\"",n,fact(n));
getch();
}
int fact(int n) //function Defination...
{
if(n>1)
{
return n*fact(n-1);
}
else if(n==1)
{
return 1;
}
else
{
return 0;
}
}

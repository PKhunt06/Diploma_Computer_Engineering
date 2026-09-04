// P-24-B Write a program to show the use of union in c.

#include<stdio.h>
#include<conio.h>
union book //union declaration using union keyword...
{
char name[25], author[25];
int price;
}u1; //s1 is union variable...
void main()
{
clrscr();
printf("Enter name of book:-\t");
gets(u1.name);
printf("Name of book:-\t");
puts(u1.author);
printf("\nEnter author of book:-\t");
gets(u1.name);
printf("Author of book:-\t");
puts(u1.name);
printf("\nEnter price of book:-\t");
scanf("%d",&u1.price);
printf("Price of book:-\t%d",u1.price);
printf("\n\nSize of union for u1 variable is:-\t%d",sizeof(u1));
getch();
}

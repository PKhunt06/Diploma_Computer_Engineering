// P-24-A Design and test at C programs on structures and unions. (a) Write a program to create a basic structure named books and 
// initialize value for name, price and author of book.

#include<stdio.h>
#include<conio.h>
struct book //structure declaration using struct keyword...
{
char name[25], author[25];
int price;
}s1; //s1 is structure variable...
void main()
{
clrscr();
printf("Enter name of book:-\t");
gets(s1.name);
printf("Enter author of book:-\t");
gets(s1.author);
printf("Enter price of book:-\t");
scanf("%d",&s1.price);
printf("\n\nName of book:-\t");
puts(s1.name);
printf("\nAuthor of book:-\t");
puts(s1.author);
printf("\nPrice of book:-\t%d",s1.price);
printf("\nSize of structure for s1 variable is:-\t%d",sizeof(s1));
getch();
}

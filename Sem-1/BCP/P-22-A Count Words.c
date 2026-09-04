// P-22-A Write a program to read a string and count total no of words in a string.

#include<stdio.h>
#include<conio.h>
void main()
{
char st[25];
int i, word=0;
clrscr();
printf("\nEnter a string:-\t");
gets(st);
printf("You entered:-\t\t");
puts(st);
for(i=0;st[i]!='\0';i++)
{ if(st[i]==32)
{
word++;
}
}
if(i>0)
{
word++;
}
printf("\nTotal words in given string is:-\t%d",word);
getch();
}

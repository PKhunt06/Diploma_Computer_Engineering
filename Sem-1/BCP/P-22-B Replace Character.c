// P-22-B Write a program to read a string and replace a given character from string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[50], ch1, ch2;
int i;
clrscr();
printf("\nEntetr a string:-\t");
gets(st);
printf("\nEnter any character from string to replace:-\t");
ch1=getche();
printf("\nEnter any character to replace with:-\t");
ch2=getche();
for(i=0;i<strlen(st);i++)
{
if(st[i]==ch1)
{
st[i]=ch2;
}
}
printf("\nNew string after replacing characters from it:-\t");
puts(st);
getch();
}

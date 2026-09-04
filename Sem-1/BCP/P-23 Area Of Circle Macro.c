// P-23 Write a program to find area of circle using macro.

#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
int r;
float area;
clrscr();
printf("Enter radius of circle:-\t");
scanf("%d",&r);
area=PI*r*r;
printf("\nArea of circle with radius \"%d\" is:-\t\"%.2f\"",r,area);
getch();
}

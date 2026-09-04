// P-6 Design and test a C program to convert temperature in Fahrenheit to Celsius and vice versa. [c=(5/9)(F-32)]

#include<stdio.h>
#include<conio.h>
void main()
{
float C, F; //C for Celsius & F for Fahrenheit
int choice;
//clrscr();
printf("\n1. Press 1 to convert Celsius to Fahrenheit\n");
printf("2. Press 2 to convert Fahrenheit to Celsius\n");
printf("Enter your choice:-\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter Celsius:-\t");
scanf("%f",&C);
F=1.8*C+32;
printf("\nGiven Celsius is \"%.2f\" = Fahrenheit is \"%.2f\"",C,F);
break;
case 2:
printf("Enter Fahrenheit:-\t");
scanf("%f",&F);
C=(5*(F-32))/9;
printf("\nGiven Fahrenheit is \"%.2f\" = Celsius is \"%.2f\"",F,C);
break;
default:
printf("Invalid Choice");
}
getch();
}

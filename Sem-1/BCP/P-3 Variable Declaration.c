// P-3 Write a program to demonstrate variable declaration, initialization and display values of variables: (1) integer (2) float and double (3) Char

#include <stdio.h>
void main()
{
int a=21; //declaration of integer variable and initialization using static or compile-time method...
float b=21.21; //declaration of float variable and initialization using static or compile-time method...
double c=2103.199; //declaration of double variable and initialization using static or compile-time
method...
char d; // only declaration of character variable...
printf("Enter value for Char variable:-");
scanf("%c",&d); //initialization of character variable using dynamic or run-time method...
printf("\n\nDisplying values for different datatype variables..........\n\n");
printf("Value of \"int\" variable is:-\t%d",a);
printf("\nValue of \"float\" variable is:-\t%f",b);
printf("\nValue of \"double\" variable is:-\t%lf",c);
printf("\nValue of \"char\" variable is:-\t%c",d);
}

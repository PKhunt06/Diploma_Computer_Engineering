// P-5 Design and test a C program to compute volume and surface area of a sphere. [Volume = 4/3 * Pi * r3, Surface area = 4 * Pi * r2, Pi= 3.14]

#include<stdio.h>
#include<conio.h>
void main()
{
float PI=3.14, r, volume, area;
clrscr();
printf("Enter Radius of circle:-\t");
scanf("%f",&r);
volume=(4/3)*PI*r*r*r;
area=4*PI*r*r;
printf("\n\nRadius of given Circle is:-\t%.2f",r);
printf("\nVolume of Sphere is:-\t\t%.2f",volume);
printf("\nSurface Area of Sphere is:-\t%.2f",area);
getch();
}

// Extra-P-3 Write a program to demonstrate use of following <math.h> library
// i) sqrt() ii) pow() iii) celi() iv) floor() v) exp()

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
float num,base,power;

clrscr();

printf("Enter a number for square root:-\t");
scanf("%f",&num);

printf("\nsqrt(%f) = %f",num,sqrt(num));

printf("\n\nEnter base:-\t");
scanf("%f",&base);

printf("Enter power:-\t");
scanf("%f",&power);

printf("\npow(%f,%f) = %f",base,power,pow(base,power));

printf("\n\nceil(%f) = %f",num,ceil(num));

printf("\nfloor(%f) = %f",num,floor(num));

printf("\nexp(%f) = %f",num,exp(num));

getch();
}

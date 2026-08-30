// P-11-B The marks obtained by a student in 5 different subjects are input through keyboard. The students get a division as per the following rules:
// Percentage above 70- Distinction
// Percentage between 60 & 70 – First class
// Percentage between 60 & 50 – Second class
// Percentage between 50 & 40 – third class
// Percentage less than 40-Fail

#include<stdio.h>
#include<conio.h>
void main()
{
float s1, s2, s3, s4, s5, percent, sum; //s1 to s5 subject marks out of 100
clrscr();
printf("\nEnter Marks of Gujarati:-\t");
scanf("%f",&s1);
printf("\nEnter Marks of Hindi:-\t");
scanf("%f",&s2);
printf("\nEnter Marks of English:-\t");
scanf("%f",&s3);
printf("\nEnter Marks of Maths:-\t");
scanf("%f",&s4);
printf("\nEnter Marks of Science:-\t");
scanf("%f",&s5);
sum=s1+s2+s3+s4+s5;
percent=sum/5;
printf("\n\nPercentage:-\t\t%.4f",percent);
if(percent>70)
{
printf("\n\nYou Pass with Distinction...");
}
else if(percent<=70 && percent>60)
{
printf("\n\nYou Pass with First Class...");
}
else if(percent<=60 && percent>50)
{
printf("\n\nYou Pass with Second Class...");
}
else if(percent<=50 && percent>=40)
{
printf("\n\nYou Pass with Third Class...");
}
else
{
printf("\n\nSorry You Fail...");
}
}

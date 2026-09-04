// P-16 All pattern in “1” program
// Aim:- Design and test pattern programs using loop structures.
//     1                1            *               *            1
//    0 1              2 2           * *            * *          3 5
//   1 0 1            3 3 3          * * *         * * *        7 9 11
//  0 1 0 1          4 4 4 4         * * * *      * * * *     13 15 17 19 

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
clrscr();
printf("Enter any number:-\t");
scanf("%d",&n);
/* To print 0
1 0
1 0 1*/
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if((i+j)%2==0)
{
printf("0\t");
}
else
{
printf("1\t");
}
}
printf("\n");
}
printf("\n\n");
/* To Print 1
2 2
3 3 3 */
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d ",i);
}
printf("\n");
}
/* To Print *
* *
* * * */

printf("\n\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*\t");
}
printf("\n");
}
/* To Print *
* *
* * * */
printf("\n\n");
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
/* To Print 1
3 5
7 9 11 */
printf("\n\n");
for(i=1;i<=n;i++)
{
static int a=1;
for(j=n;j>i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d ",a);
a=a+2;
}
printf("\n");
}
getch();
}

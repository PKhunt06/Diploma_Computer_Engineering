// P-27-B Write a program to print 1 to 100 numbers into NUM.TXT file using file pointer.

#include <stdio.h>
#include <stdlib.h>
int main()
{
int num,i;
FILE *fptr;
fptr = fopen("Num.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}else
{
printf("\nNum.txt file created success\n");
}
printf("\nEnter Num:-");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
fprintf(fptr,"%d\t",i);
}
fclose(fptr);
return 0;
}

// P-27-A Design and test C programs using file operations. (a) Write a program to print and read a string from file using file pointer.

#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
int main()
{
FILE *fptr; // file pointer
char datawrite[100]="My Name is \"Ahir Kirtan\"\n" "Adhoc lecturer at TAPI CLG";
// creating file using fopen() access mode "w"
fptr = fopen("test.txt", "w");
// checking if the file is created
if (fptr == NULL) {
printf("The file is not opened. The program will " "exit now");
// exit(0);
}
else {
printf("The file \"test.txt\" is created Successfully.");
// Write the dataToBeWritten into the file
if(strlen(datawrite)>0)
{
fputs(datawrite, fptr);
fputs("\n", fptr);
}
// Closing the file using fclose()
fclose(fptr);
printf("\nData successfully written in file. \n");
printf("The file is now closed.");
}
printf("\n-------------------------------------------------\n");
char dataread[100];
// Open the existing file test.txt using fopen() in read mode using "r" attribute
fptr=fopen("test.txt", "r");
if(fptr==NULL)
{
printf("\ntest.txt file failed to open");
}
else
{
printf("\ntest.txt file is now open...\n");
// Read the dataToBeRead from the file using fgets() method
while(fgets(dataread, 100, fptr)!=NULL)
{
printf("\n%s",dataread);
}
// Closing the file using fclose()
fclose(fptr);
printf("\nData successfully read from test.txt file\n");
printf("The file is now closed.");
}
return 0;
}

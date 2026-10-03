// P-5-A-2 Implement simple structure program using pointer.

#include <stdio.h>

struct studentsInfo
{
    int roll;
    char name[30];
    char branch[30];
    float percentage;
}s, *p;

int main()
{
    p = &s;

    printf("Enter enrollment_number = ");
    scanf("%d", &p->roll);

    printf("Enter name = ");
    scanf("%s", p->name);

    printf("Enter Branch = ");
    scanf("%s", p->branch);

    printf("Enter percentage of students = ");
    scanf("%f", &p->percentage);

    printf("\n*********Out-Put**********");

    printf("\nEnrollment number is = %d", p->roll);
    printf("\nName is = %s", p->name);
    printf("\nBranch = %s", p->branch);
    printf("\nPercentage = %f", p->percentage);

    return 0;
}

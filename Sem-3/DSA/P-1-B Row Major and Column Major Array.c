// P-1-B Implement array using row major order and column major order.

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    // Input elements
    printf("Enter elements of 3x3 array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Display array in Row Major Order
    printf("\nRow Major Order:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    // Display array in Column Major Order
    printf("\n\nColumn Major Order:\n");

    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 3; i++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}

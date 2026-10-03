// P-6-D Implement Insertion sort algorithm.
// P-6-D Write an algorithm for Insertion sort method.
// P-6-D Write a Source Code to implement insertion sort algorithm.

#include <stdio.h>

/* Develop the program for Insertion Sort. */

void main()
{
    int n, array[1000], i, j, t;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 1; i <= n - 1; i++)
    {
        j = i;

        while(j > 0 && array[j - 1] > array[j])
        {
            t = array[j];
            array[j] = array[j - 1];
            array[j - 1] = t;

            j--;
        }
    }

    printf("Sorted array is:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

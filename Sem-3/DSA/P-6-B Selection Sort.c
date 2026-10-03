// P-6-B Implement Selection sort algorithm.
// P-6-B-1 Write an algorithm for Selection sort method.
// P-6-B-2 Write a Source Code to implement Selection sort algorithm.

#include <stdio.h>

void selection_sort(int b[], int n);

void main()
{
    int b[1000], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    selection_sort(b, n);

    printf("Sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}

void selection_sort(int b[], int n)
{
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(b[j] < b[min])
            {
                min = j;
            }
        }

        temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }
}

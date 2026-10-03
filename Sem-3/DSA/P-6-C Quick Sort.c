// P-6-C Implement Quick Sort algorithm.
// P-6-C-1 Write an algorithm for Quick sort method.
// P-6-C-2 Write a Source Code to implement Quick sort algorithm.

#include <stdio.h>

void quick(int a[20], int left, int right);

void main()
{
    int a[20], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quick(a, 0, n - 1);

    printf("Sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void quick(int a[20], int left, int right)
{
    int i, j, pivot, temp;

    i = left;
    j = right;
    pivot = a[(left + right) / 2];

    while(i <= j)
    {
        while(a[i] < pivot)
        {
            i++;
        }

        while(a[j] > pivot)
        {
            j--;
        }

        if(i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
    }

    if(left < j)
    {
        quick(a, left, j);
    }

    if(i < right)
    {
        quick(a, i, right);
    }
}

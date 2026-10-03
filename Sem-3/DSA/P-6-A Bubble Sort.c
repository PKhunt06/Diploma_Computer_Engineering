// P-6 Implement Bubble sort algorithm.
// P-6-1 Write an algorithm for Bubble sort method.
// P-6-2 Write a Source Code to implement Bubble sort algorithm.

#include <stdio.h>

void bubble_sort(int a[], int n);

void main()
{
    int a[1000], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, n);

    printf("Sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void bubble_sort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

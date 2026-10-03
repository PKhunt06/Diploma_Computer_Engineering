// Extra-P-3 Given an unsorted array of numbers, generate a sorted array of numbers by applying Bubble Sort

#include <stdio.h>

void bubble_sort(int a[], int n);

void main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter unsorted array:\n");

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

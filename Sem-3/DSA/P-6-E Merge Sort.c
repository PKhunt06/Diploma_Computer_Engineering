// P-6-E Implement Merge Sort algorithm.
// P-6-E-1 Write an algorithm for Merge sort method.
// P-6-E-2 Write a Source Code to implement Merge sort algorithm.

#include <stdio.h>

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

void main()
{
    int arr[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void merge(int arr[], int left, int mid, int right)
{
    int n1, n2;
    int i, j, k;

    n1 = mid - left + 1;
    n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for(i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
    }

    for(j = 0; j < n2; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while(i < n1 && j < n2)
    {
        if(leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    int mid;

    if(left < right)
    {
        mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

#include <stdio.h>

void insertionSort(int a[], int n)
{
    int j , item = 0;

    for(int i = 1; i < n; i++)
    {
        item = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > item)
        {
            a[j+1] = a[j];
            j--;;
        }
        a[j+1] = item;     
    }
}

int main()
{
    int size;
    printf("Enter the length of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, size);

    printf("Array after sorting: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
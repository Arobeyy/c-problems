#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int temp = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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

    bubbleSort(arr, size);
    printf("Sorted array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
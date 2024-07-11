#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int temp = 0;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n -i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the element of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, size);
    
    printf("sorted array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}
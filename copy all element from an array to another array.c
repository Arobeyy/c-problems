#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    printf("Enter the elements of the array one: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //copy array elements
    for(i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }

    //print array1 elements
    printf("\nArray1: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    //print array2 elements
    printf("\nArray2: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }


    return 0;
}

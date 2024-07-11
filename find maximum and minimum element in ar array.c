#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the length of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, max;
    min = max = arr[0];

    for(i = 0; i < size; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }
    printf("\nminimum = %d and maximum = %d ", min, max);


    return 0;
}

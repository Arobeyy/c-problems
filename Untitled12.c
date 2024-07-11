#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array element: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }


    return 0;
}

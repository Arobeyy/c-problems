#include <stdio.h>

int main()
{
    int size, i;
    printf("input length: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the element of the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max, secondMax, temp = 0;
    max = secondMax = arr[0];

    for(i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
    }
    printf("\nlargest number is %d \nand second largest number is %d ", max, secondMax);


    return 0;
}

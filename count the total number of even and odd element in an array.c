#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter length: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the element of the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int even = 0 ,odd = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;

    }
    printf("\neven = %d and odd = %d", even, odd);


    return 0;
}

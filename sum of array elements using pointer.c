#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int sum = 0, *p;

    for(p = arr; p < arr + size; p++)
        sum += *p;
    printf("\nsum is %d", sum);


    return 0;
}

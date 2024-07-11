#include <stdio.h>

int linearSearch(int a[], int size, int x)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(a[i] == x)
            return i;
    }
    i = - 1;
    return i;
}

int main()
{
    int size, x;
    printf("Enter the length of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", arr[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &x);

    int result;
    result = linearSearch(arr, size, x);

    printf("element found in index %d", result);





    return 0;
}

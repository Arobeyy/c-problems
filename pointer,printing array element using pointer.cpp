#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[3];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));


    return 0;
}

#include <stdio.h>

int main()
{
    int size, *p;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(p = arr; p <arr + size ; p++)
        scanf("%d", p);

    printf("Elements in reverse order: \n");
    for(p = (arr+size-1) ; p >= 0; p--)
        printf("%d ", *p);




    return 0;
}

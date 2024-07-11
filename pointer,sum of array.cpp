#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
        sum = sum + *(arr + i);
    }
    printf("\nsum = %d\n", sum);

    return 0;
}

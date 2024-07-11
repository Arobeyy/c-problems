#include <stdio.h>

int main()
{
    int i, j, count = 0, n;

    printf("Enter the array length: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The missing number is/are:");
    for(i = 0; i < n ; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(i == arr[j])
                count++;
        }
        if(count == 0)
            printf("%d ", i);
    }


    return 0;
}

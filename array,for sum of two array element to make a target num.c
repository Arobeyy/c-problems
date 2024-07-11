#include <stdio.h>

int main()
{
    int i,j,target,n;
    printf("Enter the target num: ");
    scanf("%d", &target);

    printf("Enter the array length : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements\n: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n ; i++)
    {
        for(j = i+1; j < n ; j++)
        {
            if(arr[i] + arr[j] == target)
                printf("[%d,%d]", i, j);
        }
    }



    return 0;
}

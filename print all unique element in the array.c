#include <stdio.h>

int main()
{
    int size;
    printf("Enter the length of the array: ");
    scanf("%d", &size);

    int arr1[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int count = 0;
    for(int i = 0; i < size; i++)
    {
        count = 0;
        for(int j = 0; j < size; j++)
        {
            if (i == j)
                continue;
            if(arr1[i] == arr1[j])
                count++;
        }
        if(count > 1)
            printf("%d ", arr1[i]);
    }


    return 0;
}

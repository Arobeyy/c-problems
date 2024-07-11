#include <stdio.h>

int main()
{
    int size;
    printf("Enter the length of the array: ");
    scanf("%d", &size);


    int arr[size];
    int arr2[size];
    arr2[size] = 0;
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int index = 0;
    int duplicate = 0;
    for(int i = 0; i < size; i++)
    {
        count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr2[j])
                count++;
        }
        if(count == 0)
        {
            arr2[index] = arr[i];
            index++;
        }
    }

    int freq = 0;
    for(int i = 0; i < index; i++)
    {
        int freq = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr2[i] == arr[j])
                freq++;
        }
        if(freq > 1)
            duplicate++;
    }

    printf("Total number of duplicate element the array is : %d", duplicate);


    return 0;
}

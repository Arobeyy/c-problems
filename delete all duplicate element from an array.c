#include <stdio.h>
#define N 50

int main()
{
    int size;
    printf("Enter the length of the array : ");
    scanf("%d", &size);

    int arr[N];
    int arr3[N];
    int arr2[size];
    arr2[size] = 0;
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //copy all elements from arr to arr3
    for(int i = 0; i < size; i++)
    {
        arr3[i] = arr[i];
    }

    int count = 0;
    int index = 0;
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
    int newSize = size;
    for(int i = 0; i < index; i++)
    {
        freq = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr2[i] == arr[j])
                freq++;
        }
        if(freq > 1)
        {
            for(int k = i; k <= newSize; k++)
            {
                arr3[i] = arr3[i + 1];
            }
            newSize--;
        }
    }

    for(int i = 0; i < newSize; i++)
    {
        printf("%d ", arr3[i]);
    }


    return 0;
}

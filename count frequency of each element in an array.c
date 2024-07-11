#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
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
    for(int i = 0; i < size; i++)
    {
        count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr2[j])//checking if the element is already in arr2 or not
                count++;
        }
        if(count == 0)
        {
            arr2[index] = arr[i];//putting only element which is not already in arr2 from array 1 to array 2
            index++;
        }
    }

    int duplicate = 0;

    int freq = 0;
    for(int i = 0; i < index; i++)//using index as arr2 size
    {
        freq = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr2[i] == arr[j])
                freq++;//recording frequency of the elements
        }
        printf("\nFrequency of %d is : %d", arr2[i], freq);
        if(freq > 1)
            duplicate++;
    }

    printf("duplicate : %d", duplicate);


    return 0;
}

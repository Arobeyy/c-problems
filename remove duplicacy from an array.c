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
    for(int i = 0; i < size; i++)
    {
        count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr2[j])//checking if the element is already in array 2 or not
                count++;
        }
        if(count == 0)
        {
            arr2[index] = arr[i];//putting element which are not already in array 2 ,from array 1 to array 2
            index++;
        }
    }

    //printing array with no duplicate element
    printf("After removing all duplicate elements\nElements of array are: ");
    for(int i = 0; i < index; i++)
    {
        printf("%d ", arr2[i]);
    }


    return 0;
}

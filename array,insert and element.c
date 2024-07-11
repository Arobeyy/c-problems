#include <stdio.h>
#define MAX_SIZE 50

int main()
{
    int i, num, size, position;
    int arr[MAX_SIZE];
    //input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    //input element in array
    printf("Enter elements of the array: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //input the new element and position to insert
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    printf("Enter the element position: ");
    scanf("%d", &position);

    //if position of element is not valid
    if(position > size+1 || position <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d ");
    }
    else
    {
        //make room for new element
        for(i = size; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }
        //insert new element at given position and increment the size
        arr[position - 1] = num;
        size++;

        //print array element
        for(i = 0; i < size; i++)
        {
            printf("%4d", arr[i]);
        }
    }



    return 0;
}

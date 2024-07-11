#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the length of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the element of the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int negativeNum = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            negativeNum++;
    }
    printf("\nTotal number of negative number is %d", negativeNum);



    return 0;
}

#include <stdio.h>
#define N 100

int main()
{
    int arr[N];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the element of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {
        int index;
        printf("Enter the positional index: ");//enter the position of the element you want delete
        scanf("%d", &index);

        for(int i = index - 1; i <= size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("\narray after deleting the element: ");
        for(int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        int choise;
        printf("\nDo you want to continue? if yes enter 1 , if no enter 0 : ");
        scanf("%d", &choise);

        if(choise == 0)
            break;
    }


    return 0;
}

#include <stdio.h>

#define N 100
int main()
{
    int arr[N];
    int size;
    printf("Enter the length: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {
        int index, value;
        printf("Enter the index: ");
        scanf("%d", &index);
        printf("Enter the value: ");
        scanf("%d", &value);

        for(int i = size - 1; i >= index - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[index - 1] = value;
        for(int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        int choise;
        printf("Do you want to continue ? if yes enter 1, if not 0 : ");
        scanf("%d", &choise);
        if(choise == 0)
            break;
    }


    return 0;
}

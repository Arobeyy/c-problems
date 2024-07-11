#include <stdio.h>
#define MAX_SIZE 50

int main()
{
    int array[MAX_SIZE];
    int i, size;
    //input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    //input array element
    printf("Enter array element: \n");
    int odd = 0, even =0;
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < size; i++)
    {
        if(array[i] % 2 == 0)
            even++;
        else
            odd++;

    }
    printf("\n");
    printf("Total odd element: %d\n", odd);
    printf("Total even element: %d\n", even);


    return 0;
}

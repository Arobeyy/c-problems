#include <stdio.h>
#define MAX 50

int main()
{
    int array[MAX];
    int i, size, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++)
    {
        printf("element no %d : ", i+1);
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];

    for(i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < min)
        {
            min = array[i];
        }

    }
    printf("\nMaximum is : %d\n", max);
    printf("Minimum is : %d", min);



    return 0;

}

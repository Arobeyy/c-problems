#include <stdio.h>

void minMax(int arr[], int lentgh, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i = 1; i < lentgh; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int a[] = {34, 21, 65, 22, 76, 89, 33, 9, 19};
    int min, max;
    int lentgh = sizeof(a)/sizeof(a[0]);
    minMax(a, lentgh, &min, &max);
    printf("Maximum value of the array is : %d \nMinimum value of the array is: %d", max, min);

    return 0;
}

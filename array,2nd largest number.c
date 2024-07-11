#include <stdio.h>
#include <limits.h> //for INT_MIN

#define MAX_SIZE 50 //maximum array size

int main()
{
    int array[MAX_SIZE];
    int i, size, max1, max2;
    //input size of the array
    printf("Enter the size of the array (1 - 50): ");
    scanf("%d", &size);

    //input array element
    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++)
    {
        printf("element no %d : ", i+1);
        scanf("%d", &array[i]);
    }

    max1 = max2 = INT_MIN;

    //check for the first and second largest
    for(i = 0; i < size; i++)
    {
        if(array[i] > max1)
        {
            /*if current element of the array is first largest
            then make current max as second max
            and then max as current element*/
            max2 = max1;
            max1 = array[i];
        }
        else if(array[i] > max2 && array[i] < max1)
        {
            /*if current element is less than first largest
            but greater than second largest than make it
            second largest
            */
            max2 = array[i];
        }
    }


    return 0;
}

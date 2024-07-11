#include <stdio.h>
#define SIZE 10
int main(){
    int array[SIZE];
    int i;
    printf("Enter the elements of the array: \n");
    for(i = 0; i < SIZE; i++){
        printf("Element no %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("\nNegative elements in the arrays are: ");
    for(i = 0; i < SIZE; i++){
        if(array[i] > 0)
            continue;
        else
            printf("%d ", array[i]);
    }



    return 0;

}

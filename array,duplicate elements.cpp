#include <stdio.h>

int main(){
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    //declaring the array
    int x[size], y[size];
    int i, j;
    printf("Input %d elements in the array:\n");

    for(i = 0; i < size; i++){
        scanf("%d", &x[i]);
    }
    //copy element of first array into the second array
    for(i = 0; i < size; i++){
        y[i] = x[i];
    }
    int count;
    int duplicates = 0;
    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(x[i] == y[j])
                count++;
        }
        if(count > 0){
            duplicates++;
        }
        count = 0;

    }
    printf("\nNumber of duplicates element: %d\n\n", duplicates);
    printf("I <3 U more..");
    printf("\n");





    return 0;
}

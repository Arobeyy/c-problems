    #include <stdio.h>
    int main(){
        int size;
        printf("Input the number of elements to be stored in the array: ");
        scanf("%d", &size);
        //declaration of the array
        int x[size];
        int i,j;
        //loop for taking values into the array
        for(i = 0; i < size; i++){
            printf("Element - %d : ", i);
            scanf("%d", &x[i]);
        }


        return 0;
    }

    #include <stdio.h>

    int main(){
        int size;
        int i, sum = 0, avg = 0;

        printf("Input the number of element to be stored in the array: ");
        scanf("%d", &size);

        //declaring the array
        int x[size];
        //loop for taking values into the array
        for(i = 0; i < size; i++){
            printf("element - %d : ", i);
            scanf("%d", &x[i]);
        }
        printf("Elements in the array: \n");
        for(i = 0; i < size; i++){
            printf("%4d", x[i]);
            sum = sum + x[i];
        }
        avg = sum/size;
        printf("\nsum is : %d\n", sum);
        printf("average is : %d\n", avg);


        return 0;
    }

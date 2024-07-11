    #include <stdio.h>

    int main(){
        // declare array
        int x[10];
        int i;

        printf("input 10 elements in the array: \n");
        for(i = 0; i < 10; i++){
            printf("element - %d : ", i);
            scanf("%d", &x[i]);
        }

        printf("\nElements in array are: ");
        for(i = 0; i < 10; i++){
            printf("%4d", x[i]);
        }
        printf("\n");

        return 0;
    }

    #include <stdio.h>

    int main(){
        int n;
        printf("Input the number of elements to be stored in the array: ");
        scanf("%d", &n);
        //declare the array
        int x[n], y[n];
        int i ;
        for(i = 0; i < n; i++){
            printf("Element - %d : ", i);
            scanf("%d", &x[i]);
        }
        //copy element of first array into second array
        for(i = 0; i < n; i++){
            y[i] = x[i];
        }
        //prints elements of the first array
        printf("\nThe elements stored in the first array: \n");
        for(i = 0; i < n; i++){
            printf("%4d", x[i]);
        }
        //prints the elements copied into the second array
        printf("\n\nThe elements copied into the second array: \n");
        for(i = 0; i < n; i++){
            printf("%4d", y[i]);
        }
        printf("\n\n");
        return 0;
    }

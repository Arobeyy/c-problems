    #include <stdio.h>

    int main(){
        int n;
        printf("Input the number if elements to be stored in the array: ");
        scanf("%d", &n);
        //declare the array
        int x[n];
        int i, sum = 0;
        for(i = 0; i < n; i++){
            printf("element - %d : ", i);
            scanf("%d", &x[i]);
            sum += x[i];

        }
        printf("\nSum of all elements stored in the array is : %d\n", sum);



        return 0;
    }

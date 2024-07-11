    #include <stdio.h>
    int main() {
        int i,n;
        printf("test data:");
        scanf("%d", &n);
        printf("Input number of terms : %d\n" ,n);
        for (i = 1; i <= n; i++){
            printf("Number is: %d and cube of the %d is: %d \n", i, i, (i*i*i));
        }



        return 0;
    }

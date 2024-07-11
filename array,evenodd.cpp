    #include <stdio.h>

    int main(){
        int x[5], i, even_sum = 0, odd_sum = 0;

        for(i = 0; i < 5; i++){
            scanf("%d", &x[i]);
        }
        printf("Values of array: ");
        for(i = 0; i < 5; i++){
            printf("%4d", x[i]);

            if(x[i] % 2 == 0)
                even_sum = even_sum + x[i];
            else
                odd_sum = odd_sum + x[i];
        }
        printf("\nSum of even values: %d", even_sum);
        printf("\nSum of odd values: %d", odd_sum);
        return 0;
    }

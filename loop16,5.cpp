    #include <stdio.h>

    int main() {

        int i,num,sum;
        sum = 0;

        printf("Enter the number of terms: ");
        scanf("%d", &num);
        printf("\nThe even numbers are:");

        for (i = 1; i <= num; i++) {

            printf("%d ", 2*i);
            sum += 2*i;

        }
        printf("\nThe sum: %d", sum);




        return 0;
    }

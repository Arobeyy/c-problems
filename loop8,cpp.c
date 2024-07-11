    #include <stdio.h>
    int main() {
        int i,num,sum;
        sum = 0;
        printf("The number of terms: ");
        scanf("%d", &num);
        printf("\nThe odd numbers are: ");
        for (i = 1; i <= num; i++){
            printf("%d ", 2*i-1);
            sum += 2*i-1;
        }
        printf("\nThe sum of odd natural number upto %d terms: %d",num, sum);

        return 0;
    }

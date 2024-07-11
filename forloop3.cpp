    #include <stdio.h>
    int main() {
        int i,n,sum;
        sum = 0;
        printf("Enter test number:");
        scanf("%d", &n);
        printf("\nThe first %d natural numbers are\n",n);
        for(i = 1; i <= n; i++){
            printf("%d ",i);
            sum += i;
        }
        printf("\nThe sum of natural number upto %d is: %d\n", n,sum);
        return 0;
    }

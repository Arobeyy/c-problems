    #include <stdio.h>

    int main() {
        int i,num,sum;
        sum = 0;

        printf("Enter the number of terms: ");
        scanf("%d", &num);

        for (i = 1; i <= num; i++) {
            if (i % 2 != 0)
                continue;
                sum += i;
        }
        printf("The sum: %d\n", sum);


        return 0;
    }

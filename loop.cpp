    #include <stdio.h>

    int main() {
        int i,n,sum;
        float avg;
        sum = 0;
        printf("Input the 10 number: \n");
        for (i = 1; i <= 10; i++){
            printf("Number-%d :", i);
            scanf("%d", &n);
            sum += n;

        }
        avg = sum / 10.0;
        printf("the sum of 10 no is : %d\nThe average us : %f\n", sum, avg);

        return 0;
    }

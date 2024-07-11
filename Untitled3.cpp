    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main() {
        int n;
        printf("Enter no of elements: ");
        scanf("%d", &n);
        int x[n];
        int i;
        srand(time(NULL));
        int sum = 0;
        for(i=0;i<n;i++) {
            x[i] = rand() % 100;
            sum = sum + x[i];
            printf("%4d", x[i]);

        }
        printf("\nsum is: %d",sum);
        double avg = (double)sum / n;
        printf("\nAverage of the numbers: %.2lf", avg);


        return 0;
    }

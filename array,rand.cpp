    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main(){
        int n;
        printf("Enter no of elements: ");
        scanf("%d", &n);
        //declare the array
        int x[n];
        int i;
        srand(time(NULL));

        for(i=0;i<n;i++) {
            x[i] = rand() % 100;
        }
        printf("Content of the array: \n");
        int sum = 0;
        for(i=0;i<n;i++){
            printf("%4d",x[i]);
            sum = sum + x[i];
        }
        printf("\nsum is %d", sum);

        double avg =(double)sum / n;
        printf("\naverage of the numbers: %.3lf ", avg);

        return 0;
    }

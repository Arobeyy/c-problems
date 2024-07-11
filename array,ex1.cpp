    #include <stdio.h>

    int main() {
        int x[10];
        int i;
        int sum = 0;
        for(i=0;i<10;i++){
            printf("Enter value of array no %d: ",i);
            scanf("%d", &x[i]);
            sum = sum + x[i];
        }
        printf("\nSum is : %d", sum);

        return 0;
    }

    #include <stdio.h>

    int main(){
        int n;
        printf("Input the number if elements to store in the array: ");
        scanf("%d", &n);
        //declare array
        int x[n];
        int i;
        for(i = 0; i < n; i++){
            printf("Element - %d: ", i);
            scanf("%d", &x[i]);
        }
        printf("\nThe values store into the array are:\n");
        for(i = 0; i < n; i++){
            printf("%4d", x[i]);
        }
        printf("\n\nThe values store into the array in reverse are:\n");
        for(i = n-1; i >= 0; i--){
            printf("%4d", x[i]);
        }
        printf("\n\n");

        return 0;
    }

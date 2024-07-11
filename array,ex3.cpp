    #include <stdio.h>

    int main(){
        int a[5], b[5], ab[5];
        int i;
        for(i = 0; i < 5; i++){
            printf("Enter value of A on %d number position: ", i);
            scanf("%4d", &a[i]);
        }
        for(i = 0; i < 5; i++){
            printf("Enter value of B on %d number position: ", i);
            scanf("%4d", &b[i]);
        }
        //printf("value of AB array: \n");
        for(i = 0; i < 5; i++){
            ab[i] = a[i] + b[i];
            //printf("ab[%d] = %d\n", i, ab[i]);
        }
        printf("value of AB array: \n");
        for(i = 0; i < 5; i++){
            printf("%4d", ab[i]);
        }

        return 0;
    }

    #include <stdio.h>

    int main(){
        int n, i, j;
        printf("Input the number of elements to be stored in the array: ");
        scanf("%d", &n);
        // declare the array
        int x[n];

        //loop for scanning all the number into the array
        printf("Input %d number in the array: \n", n);
        for(i = 0; i < n; i++){
            printf("element - %d : ", i);
            scanf("%d", &x[i]);
        }
        int count;
        printf("The unique elements found in the array are : ");
        for(i = 0; i < n; i++){
            count = 0;
            for(j = 0; j < n; j++){
                if(i == j)
                    continue;
                if(x[i] == x[j]){
                    count++;
                }
            }
            if(count == 0){
                printf("%d ", x[i]);
            }


        }




        return 0;
    }

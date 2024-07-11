    #include <stdio.h>

    int main(){
        int a[3][3], i, j, sum = 0;


        for(i = 0; i < 3; i++){ // for row
            for(j = 0; j < 3; j++){ // for column
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < 3; i++){ // for row
            for(j = 0; j < 3; j++){ // for column
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }
            printf("\n");
        }

        float average = sum / 9.0;
        printf("Average is: %.2f ", average);

        return 0;
    }
// i = 0, j = 0, j = 1, j = 2 - [0][0],[0][1],[0][2]
// i = 1, j = 0, j = 1, j = 2 - [1][0],[1][1],[1][2]
// i = 2, j = 0, j = 1, j = 2 - [2][0],[2][1],[2][2]

#include <stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    //enter the number of rows and columns for matrix a
    printf("Enter the values of rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the element of matrix a : \n");   //loop for taking values into the array
    for(i = 0; i < arows; i++){
        for(j = 0; j < acolumns; j++){
            scanf("%d", &a[i][j]);
        }
    }
    //enter the number of rows and column for matrix b
    printf("Enter the values of rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if(acolumns != brows){
        printf("sorry! multiplication of a and b matrix is not possible ");
    }
    else {
        printf("Enter the elements of matrix b : \n");
        for(i = 0; i < brows; i++){     //loop for taking values into array b
            for(j = 0; j < bcolumns; j++){
                scanf("%d", &b[i][j]);
            }
        }
    }
    for(i = 0; i < arows; i++){     //loop for counting rows of a matrix
        for(j = 0; j < bcolumns; j++){    //loop for counting columns of b matrix
            for(k = 0; k < brows; k++){     //loop for multiplying two values from a and b matrix where
                sum += a[i][k] * b[k][j];    //rows of a and columns of b would be static till this loop
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
    //printing the array elements of product
    printf("Resultant matrix: \n");
    for(i = 0; i < arows; i++){
        for(j = 0; j < bcolumns; j++){
            printf("%4d ", product[i][j]);
        }
        printf("\n");
    }


    return 0;
}

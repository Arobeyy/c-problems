    #include <stdio.h>
    int main() {
        int i,j,k,l,rows;
        k = 1;
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (i=1;i<=rows;i++) {

            for (l=i;l<=rows;l++)
            printf(" ");

            for (j=1;j<=i;j++)
            printf("%d ",k++);

        printf("\n");
        }



        return 0;
    }

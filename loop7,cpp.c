    #include <stdio.h>
    int main() {
        int i,j,n,k;
        printf("Test data : ");
        scanf("%d", &n);
        printf("Input up to the table number starting form 1 to %d", n);

        for(i = 1 ; i <= n; i++)
        {
            k++;
            for(J = 1; j <= 10; j++)
            {
                printf("%d * %d = %d \n", k , j, k*j);
            }
            printf("\n\n");
        }



        return 0;
    }

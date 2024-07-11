    #include <stdio.h>

    int main()
    {
        int i,j,row,space;

        printf("Enter the number of rows: ");
        scanf("%d", &row);

        for (i = 0; i < row; i++)
        {
            for (j = 1; j <= row-i; j++)
                printf(" ");

            for (space = 1; space <= 2*i-1; space++)

                printf("*");

            printf("\n");
        }


        return 0;
    }

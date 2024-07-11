    #include <stdio.h>

    int main()
    {
        int i,j,row,space;

        printf("Enter number of rows: ");
        scanf("%d", &row);

        for(i = 1; i <= row; i++)
        {
            for (space = i; space <= row; space++)
                printf(" ");

            for (j = 1; j <= i;j++)
                printf("%d ",i);

        printf("\n");

        }

        return 0;
    }

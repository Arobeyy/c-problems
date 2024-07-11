    #include <stdio.h>
    int main() {
        int i,j,space,row;

        printf("Enter the number of rows: ");
        scanf("%d", &row);

        for (i = 1; i <= row; i++) {
            for (space = i; space <= row; space++)
                printf(" ");
            for (j = 1; j <= i; j++)
                printf("* ");

        printf("\n");
        }

        return 0;
    }

    #include <stdio.h>

    int main(){
        int r, c;
        // r is no of salesperson, c is no of items that they sale
        // input for r and c
        printf("Enter number of salesperson: ");
        scanf("%d", &r);
        printf("Enter number of items: ");
        scanf("%d", &c);
        printf("\n\n\n");

        //declare 2d array
        double saleData[r][c];
        // input saledata into the array
        printf("Enter sale data: \n\n");
        int i, j;
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                printf("sale amount for salesperson no %d item no %d: ", i+1, j+1);
                scanf("%lf", &saleData[i][j]);

            }

        }
        //display report.
        printf("--------------------------------\n");
        printf("sale data\n");
        printf("--------------------------------\n\n");
        double total = 0.0;
        double commission;

        for(i = 0; i < r; i++){
            printf("sale data for salesperson no. %d\n", i+1);
            printf("-------------------------------\n");
            total = 0.0;

            for(j = 0; j < c; j++){
                printf("\tItem %d: $%.3lf\n", j+1, saleData[i][j]);
                total += saleData[i][j];
            }
            printf("\tTotal : $%.3lf\n", total);
            commission = 0.1 * total;
            printf("\tCommission : $%.2lf\n", commission);
            printf("\n\n");
        }

        return 0;
    }

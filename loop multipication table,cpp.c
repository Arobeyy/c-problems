#include <stdio.h>
int main(){
    int num,i,j,k= 0;
    printf("Enter the number table: ");
    scanf("%d", &num);

    for(j = 1; j<= num; j++)
    {
        k++;
        for(i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", k, i, k*i);
        }

        printf("\n\n");
    }

    return 0;

}

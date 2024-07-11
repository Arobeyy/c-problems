#include <stdio.h>
int main(){
    int n,i,j,k= 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(j = 1; j<= n; j++)
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

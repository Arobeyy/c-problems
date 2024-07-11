#include <stdio.h>

int main()
{
    int n1, n2, fibo, i,n;

    printf("Enter range: ");
    scanf("%d", &n);

    n1 = 0;
    n2 = 1;

    for(i = 0; i <= n; i++)
    {
        if(i <= 1)
            fibo = i;
        else
        {
            fibo = n1 + n2;
            n1 = n2;
            n2 = fibo;

        }
        printf("%d ",fibo);
    }

    return 0;
}

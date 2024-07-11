#include <stdio.h>

void print_divisors(int a)
{
    int i;
    for(i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    result: print_divisors(x);


    return 0;
}

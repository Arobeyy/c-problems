#include <stdio.h>

void odd(int);
void even(int);

void odd(int n)
{
    if(n <= 10)
    {
        printf("%d ", n+1);
        n++;
        even(n);
    }
    return;
}

void even(int n)
{
    if(n <= 10)
    {
        printf("%d ", n-1);
        n++;
        odd(n);
    }
    return;
}


int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    odd(n);





    return 0;
}

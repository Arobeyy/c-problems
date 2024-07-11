#include <stdio.h>

void recursion(int);
void handleOddEven(int);

void recursion(int n)
{
    if(n == 0)
        return;
    else
        handleOddEven(n);
}

void handleOddEven(int n)
{
    recursion(n-1);

    if(n % 2 == 0)
        printf("%d ", n-1);
    else
        printf("%d ", n+1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    recursion(n);


    return 0;
}

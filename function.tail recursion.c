#include <stdio.h>

void printNum(unsigned int n)
{
    if (n == 0)
        return;

    printf("%d\n", n);
    n--;
    printNum(n);
}

int main()
{
    printNum(3);


    return 0;
}
#include <stdio.h>

void printNum(unsigned int n)
{
    if (n == 0)
        return;

    printNum(n-1);
    printf("%d\n", n);
}

int main()
{
    printNum(3);


    return 0;
}

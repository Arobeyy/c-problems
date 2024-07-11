#include <stdio.h>

int find_cube(int n)
{
    return n*n*n;
}

int main()
{
    int a;
    printf("Enter any num: ");
    scanf("%d", &a);

    printf("The cube of %d is %d ", a, find_cube(a));


    return 0;
}

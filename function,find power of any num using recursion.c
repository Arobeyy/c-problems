#include <stdio.h>

double findPow(double base ,int expo)
{
    if(expo == 0)
        return 1;

    return base * findPow(base, expo - 1);
}

int main()
{
    double base , power;
    int expo;
    printf("Enter the number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &expo);

    printf("%lf", findPow(base ,expo));


    return 0;
}


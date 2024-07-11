#include <stdio.h>
#include <math.h>

int isPrime(int);

int isPrime(int n)
{
    int i;

    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int lowerLimit, upperLimit, i;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    for(i = lowerLimit; i <= upperLimit; i++)
    {
        if(isPrime(i))
            printf("%d ", i);
    }



    return 0;
}

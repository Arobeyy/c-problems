#include <stdio.h>

int isPerfect(int);
void printPerfect(int, int);


void printPerfect (int lowerLimit, int upperLimit)
{
    int i;

    for(i = lowerLimit; i <= upperLimit; i++)
    {
        if(isPerfect(i))
            printf("%d ", i);
    }
}

int isPerfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    return (sum == n);
}

int main()
{
    int lowerLimit, upperLimit;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printPerfect(lowerLimit, upperLimit);



    return 0;
}

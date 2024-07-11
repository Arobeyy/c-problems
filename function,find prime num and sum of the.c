#include <stdio.h>
#include <math.h>

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

int sumOfPrime(int lb, int ub)
{
    int count, sum;

    for(count = lb, sum = 0; count <= ub; count++)
    {
        if (isPrime(count))
            sum += count;
    }
    return sum;
}


int main()
{
    int count;
    for(count = 10; count <= 100; count++)
    {
        if(isPrime(count))
            printf("%d is a prime number\n", count);
    }

    int s;
    s = sumOfPrime(10 , 100);
    printf("\n\nSum of prime in the range %d to %d is : %d  \n", 10, 100, s);



    return 0;
}

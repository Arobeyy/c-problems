#include <stdio.h>

int factorial(int);
int isStrong(int);
void printStrongNum(int, int);

int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return (n * factorial(n - 1)) ;
}

int isStrong(int n)
{
    int sum = 0;
    int temp = n;
    int i;
    while(n > 0)
    {
        sum += factorial(n % 10);
        n = n / 10;
    }
    return (sum == temp);

}

void printStrongNum(int lowerLimit, int upperLimit)
{
    int i;

    for(i = lowerLimit; i <= upperLimit; i++)
    {
        if(isStrong(i))
            printf("%d ", i);
    }
}

int main()
{
    int lowerLimit, upperLimit;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    //if(isStrong(145))
        //printf("Yes");

    //printf("%d", factorial(5));

    printStrongNum(lowerLimit, upperLimit);



    return 0;
}

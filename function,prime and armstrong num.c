#include <stdio.h>
#include <math.h>

int is_prime(int );
int is_armstrong(int);
int getTotalDigits(int);
int is_perfect(int);


//check whether the number is prime or not.
//return 1 if the number is prime otherwise 0.
int is_prime(int n)
{
    int i;

    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;

}

//check if a number is armstrong or not
//return 1 if yes , if not 0.
int is_armstrong(int n)
{
     int count;
     count = getTotalDigits(n);
     int temp = n;


}

//count the number of the digit in a number
int getTotalDigits(int n)
{
    int count = 0;

    while (n<0)
    {
        n = n / 10;
        count++;
    }
    return count;
}


//check if a number is perfect or not.
//if yes return 1, if not return 0.
int is_perfect(int n)
{
    int i, sum, num;
    sum = 0;
    num = n;

    for(i = 1; i < n; i++)
    {
        //if i is a divisor of n
        if(n % i == 0)
            sum += i;
    }

    if(num == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_prime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    if(is_perfect(n))
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    if(is_armstrong(n))
        printf("%d is a armstrong number.\n", n);
    else
        printf("%d is not a armstrong number.\n", n);



    return 0;
}

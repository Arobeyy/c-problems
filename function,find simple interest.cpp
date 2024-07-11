#include <stdio.h>

//write a function that calculate simple interest
//on supplying the principal amount, rate of interest
//and duration and returns the interest found to the caller.
//simple interest = (p * r * t)\100.00

double getSimpleInterest(double principal, double rate, double time)
{
    double interest;
    interest = (principal * rate * time) / 100.00;
    return interest;
}

int main()
{
    double principal , rate, time, i;
    printf("Enter principal : ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter duration: ");
    scanf("%lf", &time);

    i = getSimpleInterest(principal, rate, time);
    printf("Total Interest: $%.2lf\n", i );

    return 0;
}

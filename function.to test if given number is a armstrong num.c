#include <stdio.h>
#include <math.h>

//develop a function to test armstrong number , a number is armstrong number if
//the sum of each digit raised to the power of number of digits (in that number)
//equals to the number as 1^4 + 6^4 + 3^4 + 4^4 = 1634
//317 is armstrong number as 3^3 + 7^3 + 1^3 = 371


//prototype of the function

int getTotalDigits(int);
int isArmstrong(int);

int getTotalDigits(int n)
{
    int count = 0;

    while(n > 0)
    {
        n = n/10;
        count++;
    }
    return count;
}

int isArmstrong(int num)
{
    int sum = 0;
    int count = getTotalDigits(num);
    int temp = num;

    while(num > 0)
    {
       sum = sum + pow(num % 10, count);
       num = num/10;
    }
    return temp == sum;


}

int main()
{
    //printf("%d\n", getTotalDigits(1234) == 4);

    int i;
    for(i = 1; i <= 50000; i++)
    {
        if(isArmstrong(i))
            printf("%d is Armstrong number\n", i);
    }


    return 0;
}

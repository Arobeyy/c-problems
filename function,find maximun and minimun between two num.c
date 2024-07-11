#include <stdio.h>

void maxAndmin(int n1, int n2)
{
    if(n1>n2)
    {
        printf("%d is maximum.\n", n1);
        printf("%d is minimum.\n", n2);
    }

    else
    {
        printf("%d is maximum.\n", n2);
        printf("%d is minimum.\n", n1);
    }


}

int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    maxAndmin(num1, num2);


    return 0;
}

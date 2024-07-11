    #include <stdio.h>

    int main() {
        int i,num,factorial;
        factorial = 1;

        printf("Enter the number: ");
        scanf("%d", &num);

        for (i = 1; i <= num; i++)
            factorial *= i;
        printf("Factorial of %d is: %d\n", num, factorial);




        return 0;
    }

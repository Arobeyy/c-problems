#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Bangladesh";
    char b[20] = "Dhaka";

    strcat(a, b);
    printf("Value of a is: %s\n", a);
    printf("Value of b is: %s\n", b);


    return 0;
}

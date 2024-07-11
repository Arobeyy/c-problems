#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Bangladesh";
    char b[] = "Dhaka";

    strcpy(a, b);//destination a and source b
    printf("Value of a: %s\n", a);
    printf("Value of b: %s\n", b);



    return 0;
}

#include <stdio.h>

int main(){

    char x = 'y';
    char *ptr;

    ptr = &x;
    printf("Value of x: %c\n", x);
    printf("Value of x: %c\n", *ptr);

    return 0;
}

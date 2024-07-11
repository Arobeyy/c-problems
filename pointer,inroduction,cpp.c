#include <stdio.h>

int main(){
    printf("pointer in c: introduction\n");
    int x = 10;
    int *ptr;

    ptr = &x;
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", *ptr);



    return 0;
}

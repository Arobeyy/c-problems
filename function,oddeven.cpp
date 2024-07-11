#include <stdio.h>

void odd_or_even(int x){
    if( x % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}

int main(){
    odd_or_even(5);

    return 0;
}

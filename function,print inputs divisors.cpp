#include <stdio.h>

void print_divisors(int x){
    int i;
    for(i = 1; i <= x; i++){
        if(x % i == 0){
            printf("%d ", i);
        }
    }
}

int main(){
    print_divisors(8);
    return 0;
}

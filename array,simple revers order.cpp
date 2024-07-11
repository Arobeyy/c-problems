#include <stdio.h>

int main(){
    int a[9] = {34, 46, 23, 65, 32, 62, 97, 29, 40};
    int i;

    //Original order
    for(i = 0; i < 9; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    //Reverse order
    for(i = 8; i >= 0; i--){
        printf("%d ", a[i]);
    }


    return 0;
}

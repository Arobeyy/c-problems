#include <stdio.h>

int main(){
    int i, n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int sum = (n *(n+1))/2;
    for(i = 1; i <= n; i++)
    {

       if(i != n)
            printf("%d + ", i);
       else
            printf("%d = %d ", i, sum);

    }


    return 0;
}

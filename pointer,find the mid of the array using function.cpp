#include <stdio.h>

int *findmid(int arr[], int n)
{
    return &arr[n/2];
}


int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findmid(a, n);
    printf("%d", *mid);


    return 0;
}

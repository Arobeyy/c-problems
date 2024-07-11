#include <stdio.h>

int main()
{
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[0];
    printf("----post increment----\n");
    printf("%d ", *(p++));
    printf("%d ", *p);

    printf("\n\n----pre increment----\n");
    int b[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *q = &b[0];
    printf("%d ", *(++q));
    printf("%d ", *q);


    return 0;
}

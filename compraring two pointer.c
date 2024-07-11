#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int *p = &a[3];
    int *q = &a[5];
    printf("%d\n", p <= q);
    printf("%d\n", p >= q);
    q = &a[3];
    printf("%d\n", p == q);
    printf("\n----------\n\n");

    int b[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *r = &b[1], *s = &b[5];

    printf("%d ", *(r + 3));
    printf("%d ", *(s - 3));
    printf("%d ", s - r);
    printf("%d ", r < s);
    printf("%d ", *r < *s);

    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char first[90] = "cat";
    char second[90] = "zebra";

    int i;
    i = strcmp(first , second);
    if (i == 0)
        printf("Both are exactly equal\n");
    else if ( i < 0)
        printf("%s comes first\n",first);
    else
        printf("%s comes first\n", second);



    return 0;
}

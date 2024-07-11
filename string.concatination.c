#include <stdio.h>
#include <string.h>
int main()
{
    char first[90] = "chocolate";
    char second[90] = "candy";

    strcat(first, " ");
    strcat(first, second);
    printf("The first array contains: %s\n", first);



    return 0;
}

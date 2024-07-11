#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name:\n");
    scanf("%s", name);

    int i = 0, count = 0;
    while(name[i] != '\0')
    {
        count++;
        i++;
    }
    printf("length of name is: %d", count);


    return 0;
}

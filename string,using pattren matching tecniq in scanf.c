#include <stdio.h>
int main()
{
    char str[80];
    printf("Enter any text: ");
    scanf("%[A-Z a-z]",str);
    printf("%s\n", str);



    return 0;
}

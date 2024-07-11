#include <stdio.h>

int isLowarCase(char);
int isUpperCase(char);
char toUpperCase(char);
char toLowerCase(char);

char toLowerCase(char ch)
{
    if(isUpperCase(ch))
        return ch + 32;
    else
        return ch;
}

char toUpperCase(char ch)
{
    if(isLowarCase(ch))
        return ch - 32;
    else
        return ch;
}


int isLowarCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return 1;
    else
        return 0;
}


int isUpperCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}


int main()
{
    char k;

    k = 'A';
    k = toLowerCase(k);
    printf("Lower case equivalent: %c\n", k);

    k = 'q';
    k = toUpperCase(k);
    printf("Upper case equivalent: %c\n", k);



    return 0;
}

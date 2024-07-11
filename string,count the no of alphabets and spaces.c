
//input a string and count no of alphabets and spaces in the string
//print the result into the console

#include <stdio.h>
int main()
{
    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int i, countalpha = 0, countspace = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            countalpha++;
        else if (str[i] == ' ')  //the ascii value of space is 32
            countspace++;
    }
    printf("Total alphabetic characters found: %d\n", countalpha);
    printf("Total spaces characters found: %d\n", countspace);




    return 0;
}

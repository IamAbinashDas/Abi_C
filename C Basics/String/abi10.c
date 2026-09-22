#include <stdio.h>
#include <string.h>
char *strrev(char *str)
{
    if (*str)
    {
        strrev(str + 1);
        printf("%c", *str);
    }
}

int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s", str);
    printf("reverse string:");
    strrev(str);
    return 0;
}   
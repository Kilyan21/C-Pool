#include <stdio.h>

char *ft_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main (void)
{
    char dest[100];
    char *src = "hello/";

    ft_strcpy(dest, src);
    return 0;
}
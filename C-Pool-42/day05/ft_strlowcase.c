#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
    return str;
}

int main (void)
{
    char str[] = "HELLO WORLD";

    printf("%s\n", ft_strupcase(str));
}
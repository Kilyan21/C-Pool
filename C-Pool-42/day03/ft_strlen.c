#include <stdio.h>

int ft_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main (void)
{
    ft_strlen("hello");
}
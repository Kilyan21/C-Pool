#include <stdio.h>

char *ft_strrev(char *str)
{
    int len = my_strlen(str) - 1;
    int j = len;
    char t = '\0';

    for (int i = 0; i <= len / 2; i++) {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
        j--;
    }
    return str;
}

int main(void)
{
    ft_strrev("Hello");
}
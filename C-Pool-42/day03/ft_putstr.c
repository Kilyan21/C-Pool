#include <stdio.h>

void ft_putstr(char *str)
{
    int i = 0;

    if (str == NULL) {
        return 84;
    }
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int main(void)
{
    ft_putstr("hello world");
}

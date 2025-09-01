#include <stdio.h>

void ft_print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }
}

int main(void)
{
    ft_print_alphabet();
}
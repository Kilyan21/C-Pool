#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
    int i;

    for (i = 'z'; i >= 'a'; i--) {
        putchar(i);
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
}
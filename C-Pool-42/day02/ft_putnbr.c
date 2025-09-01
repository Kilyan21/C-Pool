#include <stdio.h>

void ft_putnbr(int nb)
{
    if (nb < 0) {
        nb = nb * -1;
        putchar('-');
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    putchar((nb % 10) + '0');
}

int main(void)
{
    ft_putnbr(42);
}
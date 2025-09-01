#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int fact = 1;
    int i;

    if (nb < 0 || nb >= 10) {
        return 0;
    }
    for (i = 1; i <= nb; i++)
        fact *= i;
    return fact;
}

#include <stdio.h>

int ft_recursive_power(int nb, int p)
{
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
    return 1;
    } else {
        return (nb * ft_recursive_power(nb, p - 1));
    }
}

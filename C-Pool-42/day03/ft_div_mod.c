#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0) { 
        *div = a / b;
        *mod = a % b;
    }
}

int main(void)
{
    int a;
    int b;

    ft_div_mod(70, 80, &a, &b);
    printf("div = %d, reste = %d\n", a, b);
    return 0;
}
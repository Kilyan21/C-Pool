#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int division = 0;
    int reste = 0;

    if (b && *b != 0) {
        division = *a / *b;
        reste = *a % *b;
        *a = division;
        *b = reste;
    }
}

int main(void)
{
    int a = 30;
    int b = 20;

    ft_ultimate_div_mod(&a, &b);
    printf("div = %d, reste = %d\n", a, b);
    return 0;
}
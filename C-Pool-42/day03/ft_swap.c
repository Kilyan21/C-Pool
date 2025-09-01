#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 80;
    int b = 50;

    ft_swap(&a, &b);
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
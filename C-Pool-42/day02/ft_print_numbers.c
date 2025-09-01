#include <stdio.h>

void my_print_comb(void)
{
    for(int i = 0; i <= 9; i++) {
        putchar(i + '0');
    }
}
int main(void)
{
    my_print_comb();
}
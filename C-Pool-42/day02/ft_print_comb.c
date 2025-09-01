#include <stdio.h>

void ft_print_comb(void)
{
    for (char i = '0'; i <= '7'; i++) {
        for (char u = i + 1; u <= '8'; u++) {
            for (char d = u + 1; d <= '9'; d++) {
                putchar(i);
                putchar(u);
                putchar(d);

                if (i != '7' || u != '8' || d != '9') {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
}

int main() 
{
    ft_print_comb();
}
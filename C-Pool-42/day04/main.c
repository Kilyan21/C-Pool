#include <stdio.h>

int ft_recursive_power(int nb, int p);
int ft_sqrt(int nb);
int	ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_iterative_factorial(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_fibonacci(int index);

int main(void)
{
    printf("Factorial = %d\n", ft_iterative_factorial(5));
    printf("Recursive factorial = %d\n", ft_recursive_factorial(5));
    printf("Power = %d\n", ft_iterative_power(2, 4));
    printf("Recursive power = %d\n", ft_recursive_power(2, 4));
    printf("Fibonacci = %d\n", ft_fibonacci(8));
    printf("Sqrt = %d\n", ft_sqrt(16));
    printf("Is prime? %d\n", ft_is_prime(13));
    printf("Next prime after = %d\n", ft_find_next_prime(14));
}

#include <stdio.h>

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == ' ' || *str == '\t' || *str == '\n') {
		str++;

	    if (*str == '-' || *str == '+') {
		    if (*str == '-')
			    sign = -1;
		str++;
        }
	}
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}

int main(void)
{
    printf("%d\n", ft_atoi("     42abd"));
    return 0;
}
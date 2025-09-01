#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
    int	i;
	int	tmp = 0;
	int	sorted = 0;

	while (!sorted)
	{
		sorted = 1;
        i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(void)
{
	int	tab[] = {5, 3, 8, 1, 4};
	int	size = 5;
    int i = 0;

	ft_sort_integer_table(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}

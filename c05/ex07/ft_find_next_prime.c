#include <stdio.h>

int	is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (1)
	{
		if (is_prime(i))
			break;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%d ", ft_find_next_prime(6));
	return 0;
}

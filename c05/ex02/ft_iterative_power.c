#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (!nb && !power)
		return 0;
	if (nb && !power)
		return 1;
	result = 1;
	i = 0;
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_iterative_power(2, 6));
	return 0;
}

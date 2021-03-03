#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *result;
	
	if (min >= max)
		return (null);
	result = malloc((int)sizeof(int) * (max - min));
	i = -1;
	while (min < max)
		result[++i] = min++;
	return (result);
}

int	main(void)
{
	int i;
	int *result;
	
	result = ft_range(0, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d", result[i]);
		i++;
	}
	return (0);
}

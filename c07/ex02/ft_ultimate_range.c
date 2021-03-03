#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range = malloc((int)sizeof(int*) * (max - min));
	
	i = 0;
	while (min < max)
		range[i++][0] == min++;
	return (max - min);
}

int	main(void)
{
	int **range;
	int len = ft_ultimate_range(range, 0, 5);
	int i = -1;
	
	printf("!");
	while (range[++i])
	{
		printf("%d", range[i][0]);
	}
	return 0;
}


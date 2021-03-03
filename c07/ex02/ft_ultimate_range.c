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
	range = (int**)malloc(sizeof(int*) * (max - min));
	i = 0;
	while (i < (max-min))
	{
		*(range + i) = (int*)malloc(sizeof(int) * 3);
		i++;
	}
	i = 0;
	while (min < max)
		range[i++][0] = min++;
	return (max - min);
}

int	main(void)
{
	int **range;
	int len = ft_ultimate_range(range, 0, 5);
	int i = 0;

	printf("!");
	/*
	while (i < 5)
	{
		printf("%d", range[i][0]);
		i++;
	}
	*/
	return 0;
}


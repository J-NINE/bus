#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int j;
	char *result;

	i = -1;
	while (src[++i]);
	result = malloc((int)sizeof(char) * i);
	i = -1;
	while (src[++i])
	{
		result[i] = src[i];	
	}
	return (result);
}

int	main(void)
{
	char *str = "Origin str";
	printf("%s\n", ft_strdup(str));
	return 0;
}

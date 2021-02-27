#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && n--)
	{
		if(s1[i] != s2[i])
			return (s1[i] > s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d ", ft_strncmp("Gooah", "GooahJung", 6));
	return (0);
}

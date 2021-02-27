#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\n')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	printf("%s", ft_strcat("gooah", " aka.gojug"));
	return 0;
}

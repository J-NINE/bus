//	s1<s2: -1, s1=s2: 0, s1>s2: 1
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	if(ft_strlen(s1) > ft_strlen(s2))
		return 1;
	else if (ft_strlen(s1) < ft_strlen(s2))
		return -1;
	i = 0;
	while (s1[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] > s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d ", ft_strcmp("ooah", "Gooah"));
	return 0;
}

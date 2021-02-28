#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i]);
	return (i);
}

int	main(void)
{
	char *str = "gooas";
	printf("%d", ft_strlen(str));
	return 0;
}

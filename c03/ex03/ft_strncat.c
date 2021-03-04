#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = -1;
	while (dest[++i]);
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[50] = "gojung";
	char *src;
	unsigned int size;

	size = 6;
	src = " gooah";
	printf("%s", strncat(dest, src, size));
}


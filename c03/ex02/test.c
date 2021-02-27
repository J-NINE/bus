#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main(void)
{
	char* dest = malloc(1 * 32);
	char* src = malloc(1 * 32);
	dest = "gooah";
	src = "jung";

	printf("%s", ft_strcat(dest, src));
	return 0;
}

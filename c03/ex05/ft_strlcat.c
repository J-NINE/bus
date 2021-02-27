#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = -1;
	while (dest[++i]);
	res = -1;
	while (src[++res]);
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

int main(void)
{
	const char src1[10]	= "ab";
	char dest1[10]   = "123";

	char src[10]	= "ab";
	char dest[10]	= "123";

	size_t 			nb = 2;
	unsigned int 	nb2 = 2;
	//strcat(src, dest);
	printf("Str: %ld \n", strlcat(dest1, src1, nb));
	printf("Str: %d", ft_strlcat(dest, src, nb2));
	return (0);
}

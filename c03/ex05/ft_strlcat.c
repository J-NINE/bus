#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_i;
	unsigned int j;
	unsigned int result;

	dest_i = -1;
	while (dest[++dest_i]);
	result = -1;
	while (src[++result]);
	if (size <= dest_i)
		result += size;
	else
		result += dest_i;
	j = 0;
	while (src[j] && (dest_i + 1 < size))
	{
		dest[dest_i] = src[j];
		dest_i++;
		j++;
	}
	dest[dest_i] = '\0';
	return (result);
}

int main(void)
{
	const char src1[10]	= "ab";
	char dest1[10] = "123";

	char src[10] = "ab";
	char dest[10] = "123";

	//size_t  nb = 2;
	unsigned int size_2 = 2;
	//strcat(src, dest);
//	printf("%ld \n", strlcat(dest1, src1, nb));
	printf("%d", ft_strlcat(dest, src, size_2));
	return (0);
}

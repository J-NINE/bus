#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[++i]);
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i]);
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *str;
	int length;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	length = 0;
	i = -1;
        while (++i < size)
                length = length + ft_strlen(strs[i]);
        length += ft_strlen(sep) * (size - 1) + 1;
	if (!(str = malloc(sizeof(char) * length)))
		return (NULL);
	*str = 0;
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}

int	main(void)
{
	char **strs = malloc(sizeof(char*) * 3);
	strs[0] = "abc";
	strs[1] = "bsd";
	printf("%s ", ft_strjoin(2, strs, "+"));
	return 0;
}

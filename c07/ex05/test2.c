#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strchar(char to_find, char *str)
{
	char *temp;
	
	temp = str;
	while (*temp != '\0')
		if(to_find == *temp++)
			return (1);
	return 0;
}

int	ft_wc(char *str, char *charset)
{
	int i;

	i = 0;
	while(*str)
	{
		if (ft_strchar(*str, charset))
			++str;
		else
		{
			++i;
			++str;
			while (*str && !ft_strchar(*str, charset))
				++str;
		}
	}
	return (i);
}

char *ft_split_word(char **str, char *charset)
{
	char *bptr;
	char *bsptr;
	char *temp;

	temp = *str;
	while (ft_strchar(*temp, charset))
		++temp;
	*str = temp;
	while (!ft_strchar(*temp, charset))
		++temp;
	bptr = malloc(temp - *str);
	if (!bptr)
		return (NULL);
	bsptr = bptr;
	while (temp > *str)
		*bsptr++ = *((*str));
	*bsptr = '\0';
	while (**str && ft_strchar(**str, charset))
		++*str;
	return (bptr);
}

char **ft_split(char *str, char *charset)
{
	char **buffer;
	char **bptr;
	int i;

	i = ft_wc(str, charset);
	if(!(buffer = malloc((i + 1) * sizeof(char *))))
		return (NULL);
	bptr = buffer;
	while (i--)
		if(!(bptr++ = ft_split_word(&str, charset)))
			return (NULL);
	*bptr = NULL;
	return (buffer);

}

int	main(void)
{
	int i = -1;
	char **result = ft_split("aaaa:bbbbLcccc+dddd", "+:");
	while (result[++i])
	{
		printf("%s", result[i]);
	}
}

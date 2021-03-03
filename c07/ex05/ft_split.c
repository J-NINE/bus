#include <stdio.h>
#include <stdlib.h>

int	is_charset(char a, char *charset)
{
	int i;

	i = -1;
	while (charset[++i])
	{
		if(charset[i] == a)
			return 1;
	}
	return 0;
}

char **ft_split(char *str, char *charset)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if()
	}
		
}

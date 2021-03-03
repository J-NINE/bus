#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char* str)
{
	int i;

	i = -1;
	while (str[++i]);
	return (i);
}

int	is_valid(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[i++])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return 0;
		j = i + 1;
		while (base[j])
		{
			if(base[i] == base[j])
				return 0;
			j++;
		}
	}
	if (i <= 1)
		return 0;
	return 1;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if(ft_strlen(base_from) != ft_strlen(base_to))
		return NULL;

}

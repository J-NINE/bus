#include <stdio.h>
#include <stdlib.h>


int	ft_strlen(char* str)
{
	int i;

	i = -1;
	while (str[++i]);
	return (i);
}
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if(ft_strlen(base_from) != ft_strlen(base_to))
		return NULL;

}

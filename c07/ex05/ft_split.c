#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i]);
	return (i);
}

int is_charset(char a, char *charset)
{

}

char *ft_cut(char *str, int head, int tail)
{
	int i;
	char *result;
	
	result = (char*)malloc(sizeof(char) * (tail - head + 1));
	i = 0;
	if (head < 0 || tail >= ft_strlen(str))
		return NULL;
	while (head <= tail)
		result[i++] = str[head++];
	return result;
}

char	**ft_split(char *str, char *charset)
{

}
int	main()
{	char *str = "aaaa:bbbb:cccc+dddd";
	char *charset = "+:";
	printf("%s", ft_cut(str, 0, ft_strlen(str)-1));
	return 0;
}

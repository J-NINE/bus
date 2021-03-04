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
	int i;
	i = -1;
	while (charset[++i])
		if(a == charset[i])
		{
		//	printf("%c in charset\n", a);
			return (1);
		}
	return (0);
}

char *ft_cut(char *str, int head, int tail)
{
	int i;
	char *result;
	
	result = (char*)malloc(sizeof(char) * (tail - head + 2));
	i = 0;
	if (head < 0 || tail >= ft_strlen(str))
		return (NULL);
	while (head <= tail)
		result[i++] = str[head++];
	printf("\nft_cut: %s\t", result);
	result[i] = '0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int x;
	int head;
	int tail;
	int token_num;
	char **result;
	
	token_num = 0;
	i = -1;
	while (str[++i])
		if(is_charset(str[i], charset))
			token_num++;
	printf("%d", token_num);
	result = (char**)malloc(sizeof(char*) * token_num + 1);
	
	tail = 0;
	head = 0;
	x = 0;
	while (str[tail])
	{
		if(is_charset(str[tail], charset))
		{
			result[i] = (char*)malloc(sizeof(char) * (head - tail + 2));
			result[i] = ft_cut(str, head, tail);
			printf("x: %d \t result[x]: %s\t", x, result[x]);
			head = tail;
			x++;
		}
		tail++;
	}
	result[x] = ft_cut(str, head, ft_strlen(str) - 1);
}
int	main()
{	char *str = "aaaa:bbbb:cccc+dddd";
	char *charset = "+:";
	char **result;
	printf("ft_cut test: %s\n", ft_cut(str, 0, ft_strlen(str)-1));
	result = ft_split(str, charset);
	return 0;
}

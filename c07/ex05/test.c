#include <stdio.h>
#include <stdlib.h>

char	*ft_stringparse(char* str, int start, int end)
{
	int i;
	char *result;
	
	result = malloc(sizeof(char) * (end - start + 2));
	i = 0;
	while (start <= end)
	{
		result[i] = str[start];
		printf("result[%d]: %c\n", i, result[i]);
		i++;
		start++;
	}
	//result[i] = '0';
	return (result);
}

int	is_charset(char a, char *charset)
{
	int i;
	i = -1;
	while (charset[++i])
		if(charset[i] == a)
			return (1);
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int size;
	char **result;
	int start = 0;
	char * temp;
	size = 0;
	i = -1;
	while(str[++i])
		if(is_charset(str[i], charset))
			size++;
	result = (char**)(malloc(sizeof(char*) * (size + 1)));
	while (str[i])
	{
		printf("?");
		if(is_charset(str[i], charset))
		{	
			printf("!");
			temp = ft_stringparse(str, start, i);
			printf("%s\n", temp);
			start = i;
		}

		i++;
	}

}

int	main(void)
{
	char ** result = ft_split("aaaa:bbbb:ccc+dddd", ":+");
	printf("%s", ft_stringparse("abcdefg", 2, 4));
	return 0;
}

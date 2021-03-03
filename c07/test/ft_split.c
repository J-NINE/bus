#include <stdio.h>
#include <stdlib.h>

int	is_charset(char a, char *charset)
{
	int i = 0;
	while (charset[i])
	{
		if(charset[i] == a)
			return 1;
		i++;
	}
	return 0;
}

int how_many_tokens(char *str, char *charset)
{
	int i = 0;
	int ctr = 0;
	while (str[i])
	{
		if(is_charset(str[i], charset))
			ctr++;
		i++;
	}
	return ctr + 1;
}

char *ft_parsor(char *str, int start, int end)
{
	int i = 0;
	char *result = malloc(sizeof(char) * (end - start + 1));
	while (start <= end)
	{
		result[i] == str[start];
		i++;
		start++;
	}
	printf("%s", result);
	return result;
}

char **ft_split(char *str, char *charset)
{
	int i = 0;
	int **result;
	int start = 0;
	//토큰 갯수 구해서malloc
	int size = how_many_tokens(str, charset);
	result = malloc(sizeof(char*) * size);

	while (str[i])
	{
		//만약 잘 가다가 구분자 만나면
		if(is_charset(str[i], charset))
		{
			//start부터 i까지 substring만들어서 result[i]에 넣기
			printf("%s", ft_parsor(str, start, i));
			start = i;
		}
		i++;
	}
	return NULL;

}

int	main(void)
{
	printf("%s", ft_parsor("asdfg", 1, 3));
	//char **result = ft_split("aaaa:vvvv:dddd+ffff", "+:");
}

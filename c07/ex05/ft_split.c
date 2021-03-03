#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i]);
	return (i);
}

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

char *ft_stringparse(char *str, int i, int j)
{
	int x;
	char *result;
	
	result = malloc(sizeof(char) * (i - j + 2));
	x = 0;
	while (i <= j)
	{
		result[x] = i;
		i++;
		x++;
	}
	result[i] = '0';
	return (result);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int j;
	int ctr;
	int size;
	char **result;
	char *temp;

	i = -1;
	while (str[++i])
		if(is_charset(str[i], charset))
			size++;
	result = (char**)malloc(sizeof(char*) * (size + 1));
	
	i = -1;
	j = 0;
	ctr = 0;
	while (str[++i])
	{
		if (is_charset(str[i], charset))	// 구분자 만나면
		{	
			//j부터 i 구분자까지 잘라다가 0 더해서result[ctr]에 집어넣고
			temp =  ft_stringparse(str, i, j);
			if(!ft_strlen(temp))
			{
				*(result + ctr) = malloc(sizeof(char) * ft_strlen(temp));
				j = i;
				ctr++;
			}
		}
	}
}

int	main(void)
{
	int i;
	int j;
	char **result = ft_split("aaaa:bbbb:cccc:dddd:", ":+");


	i = -1;
	while (result[++i])
	{
		printf("%s\n", result[i]);
	}

	return 0;
}

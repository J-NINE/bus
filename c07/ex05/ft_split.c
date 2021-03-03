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
	
	result = (char*)malloc(sizeof(char) * (i - j + 2));
	x = 0;
	printf("!\n");
	while (j <= i)
	{
		result[x] = str[j];
		printf("%d: %c \n", x, result[j]);
		j++;
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
		if (is_charset(str[i], charset))
		{
			temp =  ft_stringparse(str, i, j);
			if(0 != ft_strlen(temp))
			{
				*(result + ctr) = malloc(sizeof(char) * ft_strlen(temp));
				result[ctr] = temp;
				//printf("%s\n", temp);
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
	
	/*
	char *str = "aaaa:bbbb+cccc:dddd";
	i = -1;
	while (str[++i])
	{
		if(is_charset(str[i], "+:"))
			printf("?");
	}
	*/

	char **result = ft_split("aaaa:bbbb+cccc:dddd", ":+");

	//printf("%s", ft_stringparse("01234567", 5, 3));
	
	i = -1;
	while (result[++i])
	{
		printf("%s\n", result[i]);
	}


	return 0;
}

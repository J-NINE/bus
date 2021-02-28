#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int result;
	int i;
	int minus;

	result = 0;
	i = 0;
	minus = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			minus *= (-1);
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result  = (result * 10) + str[i++] - '0';
	}
	return (minus * result);
}

int	main(void)
{
	printf("%d", ft_atoi("   ---+--+1234ab567"));
	return 0;
}

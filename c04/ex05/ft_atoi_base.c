#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
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
			minus *= (-1);
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + str[i++] - '0';
	return (minus * result);
}

int	is_valid(char *base)
{
	int i;
	int j;
	
	i = -1;
	while (base[++i])
	{
		if(base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return 0;
		j = i + 1;
		while (base[j])
		{
			if(base[i] == base[j])
				return 0;
			j++;
		}
	}
	if(i == 0 || i == 1)
		return 0;
	return 1;
}

int	ft_atoi_base(char *str, char *base)
{
	int nbr;
	int base_i;
	int result[100];
	int i;

	nbr = ft_atoi(str);
	if (is_valid(base))
	{
		if (nbr < 0)
		{
			nbr *= (-1);
			write(1, "-", 1);
		}
		base_i = -1;
		while (base[++base_i]);
		i = 0;
		while (nbr)
		{
			result[i] = nbr % base_i;
			nbr = nbr / base_i;
			i++;
		}
		while (--i >= 0)
			write(1, &base[result[i]], 1);
	}
}

int	main(void)
{
	//printf("%d ", ft_atoi("     ---+--2412a"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 05:47:02 by gojung            #+#    #+#             */
/*   Updated: 2021/03/09 06:14:51 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
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
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result *= 10;
		result += (str[i] - '0');
	}
	return (minus * result);
}

int	is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int nbr;
	int base_i;
	int result[100];
	int i;
	int answer;

	nbr = ft_atoi(str);
	if (is_valid(base))
	{
		if (nbr < 0)
		{
			nbr *= (-1);
			write(1, "-", 1);
		}
		base_i = 0;
		while (base[base_i])
			base_i++;
		i = -1;
		while (nbr)
		{
			result[++i] = nbr % base_i;
			nbr /= base_i;
		}
		answer = 0;
		while (--i >= 0)
		{
			answer = answer * 10 + result[i];
		}
	}
}

int	main(void)
{
	printf("%d ", ft_atoi_base("17", "0123456789abcdef"));
}

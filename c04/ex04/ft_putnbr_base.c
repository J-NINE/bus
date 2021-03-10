/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:30:47 by gojung            #+#    #+#             */
/*   Updated: 2021/03/10 22:23:36 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
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
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_long;
	char	result[32];
	int		base_length;
	int		i;

	if (!is_valid(base))
		return ;
	base_length = 0;
	while (base[base_length])
		base_length++;
	nbr_long = nbr;
	if (nbr < 0)
	{
		nbr_long *= (-1);
		write(1, "-", 1);
	}
	i = 0;
	while (nbr_long > 0)
	{
		result[i] = base[nbr_long % base_length];
		nbr_long /= base_length;
		i++;
	}
	while (--i >= 0)
		write(1, &result[i], 1);
}

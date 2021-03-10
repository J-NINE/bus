/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 05:19:23 by gojung            #+#    #+#             */
/*   Updated: 2021/03/09 05:20:59 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *base)
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
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_i;
	int	result[100];
	int	i;

	i = 0;
	if (is_valid(base))
	{
		if (nbr < 0)
		{
			nbr *= (-1);
			ft_putchar('-');
		}
		base_i = 0;
		while (base[base_i])
			base_i++;
		while (nbr)
		{
			result[i] = nbr % base_i;
			nbr = nbr / base_i;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[result[i]]);
	}
}

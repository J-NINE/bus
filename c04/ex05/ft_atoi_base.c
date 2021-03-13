/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 22:11:59 by gojung            #+#    #+#             */
/*   Updated: 2021/03/11 03:53:20 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			minus *= (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
		result = (result * 10) + str[i++] - '0';
	return (minus * result);
}

int		is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
				|| base[i] < 32 || base[i] > 126)
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

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		ft_nbr_base(int nbr, char *base)
{
	long	nbr_long;
	char	result[32];
	int		i;
	int		minus;
	int		total;

	minus = 1;
	nbr_long = nbr;
	if (nbr < 0)
	{
		nbr_long *= (-1);
		minus *= (-1);
	}
	i = 0;
	while (nbr_long > 0)
	{
		result[i++] = base[nbr_long % ft_strlen(base)];
		nbr_long /= ft_strlen(base);
	}
	total = 0;
	while (i--)
		total = (total * 10) + (result[i] - '0');
	return (total * minus);
}

int		ft_atoi_base(char *str, char *base)
{
	int nbr;

	if (is_valid(base))
	{
		nbr = ft_atoi(str);
		return (ft_nbr_base(nbr, base));
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:30:37 by gojung            #+#    #+#             */
/*   Updated: 2021/03/08 17:34:14 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (1);
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[++i])
	{
		if (!is_alpha(str[i-1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (str[i - 1] != ' ' && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
	}
	return (str);
}

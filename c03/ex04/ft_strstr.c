/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:19:23 by gojung            #+#    #+#             */
/*   Updated: 2021/03/11 04:21:46 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] && !s2[i]) || (!s1[i] && s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int position;

	if (!to_find || !(ft_strcmp(to_find, "")))
		return (str);
	position = 0;
	while (str[position])
	{
		if (str[position] == to_find[0])
		{
			i = 1;
			while (to_find[i]  && (str[position + i] == to_find[i]))
				++i;
			if (!to_find[i])
				return (&str[position]);
		}
		position++;
	}
	return (0);
}

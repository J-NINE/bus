/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:19:23 by gojung            #+#    #+#             */
/*   Updated: 2021/03/09 05:07:31 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int position;

	if (!to_find)
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

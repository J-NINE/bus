/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:30:55 by gojung            #+#    #+#             */
/*   Updated: 2021/03/08 20:20:16 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && --size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

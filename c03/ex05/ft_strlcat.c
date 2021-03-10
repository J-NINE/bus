/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <gojung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:20:24 by gojung            #+#    #+#             */
/*   Updated: 2021/03/09 05:08:52 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_i;
	unsigned int j;
	unsigned int result;

	dest_i = 0;
	while (dest[dest_i])
		dest_i++;
	result = 0;
	while (src[result])
		result++;
	if (size <= dest_i)
		result += size;
	else
		result += dest_i;
	j = 0;
	while (src[j] && (dest_i + 1 < size))
	{
		dest[dest_i] = src[j];
		dest_i++;
		j++;
	}
	dest[dest_i] = '\0';
	return (result);
}

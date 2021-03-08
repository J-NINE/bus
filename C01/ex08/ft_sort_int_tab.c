/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:41:58 by gojung            #+#    #+#             */
/*   Updated: 2021/02/24 20:56:46 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int index;

	index = 0;
	while (index <= (size - 2))
	{
		if (tab[index] > tab[index + 1])
		{
			temp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp;
			index = 0;
		}
		else
		{
			index++;
		}
	}
}

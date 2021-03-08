/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:37:24 by gojung            #+#    #+#             */
/*   Updated: 2021/02/24 18:38:36 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int front;
	int temp;

	front = 0;
	size--;
	while (front < size)
	{
		temp = tab[front];
		tab[front] = tab[size];
		tab[size] = temp;
		front++;
		size--;
	}
}

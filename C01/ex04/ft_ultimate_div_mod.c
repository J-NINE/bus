/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:28:35 by gojung            #+#    #+#             */
/*   Updated: 2021/02/24 18:29:42 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_num;
	int b_num;

	a_num = *a;
	b_num = *b;
	(*a) = a_num / b_num;
	(*b) = a_num % b_num;
}

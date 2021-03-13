/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gojung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:25:30 by gojung            #+#    #+#             */
/*   Updated: 2021/03/13 23:10:37 by gojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argv(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
}

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

int		main(int argc, char **argv)
{
	char *temp;
	int i;
	int j;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		}
	}
	print_argv(argc, argv);
	return (0);
}

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_possible_place(int table[10], int row, int col)
{
	int i;

	i = -1;
	while (++i < row)
		if (col == table[i] ||
				i + table[i] == row + col ||
				i - table[i] == row - col)
			return (0);
	return (1);
}

void	ft_ten_queens_puzzle_recur(int table[10], int *res, int row)
{
	int i;

	if (row == 10)
	{
		*res += 1;
		i = -1;
		while (++i < 10)
			ft_putchar(table[i] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
			if (is_possible_place(table, row, i))
			{
				table[row] = i;
				ft_ten_queens_puzzle_recur(table, res, row + 1);
			}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int table[10];
	int i;
	int res;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	res = 0;
	ft_ten_queens_puzzle_recur(table, &res, 0);
	return (res);
}

int	main(void)
{
	printf("%d ", ft_ten_queens_puzzle());
	return 0;
}

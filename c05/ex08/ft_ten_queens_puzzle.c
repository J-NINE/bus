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

void	ft_ten_queens_puzzle_recur(int table[10], int *res, int pos)
{
	int i;
	int i2;

	if (pos == 10)
	{
		*res += 1;
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(table[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
			if (is_possible_place(table, pos, i))
			{
				table[pos] = i;
				ft_ten_queens_puzzle_recur(table, res, pos + 1);
			}
	}
}

int		ft_ten_queens_puzzle(void)
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
	ft_ten_queens_puzzle();
	return 0;
}

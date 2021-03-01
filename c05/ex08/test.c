#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_possible_place(int table[10], int row, int col)
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

int	ft_ten_queens_puzzle_recur(int table[10], int row)
{
	int i;
	int ctr;

	ctr = 0;
	if (row == 10)
	{
		i = -1;
		while (++i < 10)
			ft_putchar(table[i] + '0');
		ft_putchar('\n');
		return 1;
	}
	else
	{
		i = -1;
		while (++i < 10)
			if (is_possible_place(table, row, i))
			{
				table[row] = i;
				ctr += ft_ten_queens_puzzle_recur(table, row + 1);
			}
	}
	return ctr;
}

int ft_ten_queens_puzzle(void)
{
    int table[10];
    int i;

    i = -1;
    while (++i < 10)
        table[i] = -1;
    return (ft_ten_queens_puzzle_recur(table, 0));
}

int main(void)
{
    printf("%d ", ft_ten_queens_puzzle());
    return 0;
}

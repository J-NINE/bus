#include <stdio.h>
#include <stdlib.h>
void putboard(int sight[4][5])
{
	int i;
	i = -1;
	while (++i < 16)
	{
		printf("%d ", sight[i / 4][i % 4]);
		if((i % 4) == 3)
			printf("\n");
	}
}
int	is_possible(int board[4][4], int i, int j, int n)
{
	int idx = -1;
	while (++idx < 4 )
	{
		if (n == board[i][idx] || n == board[idx][j])
			return 0;
	}
	return 1;
}
void	print_board(int board[4][4])
{
	printf("\n");
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++)
			printf("%d ", board[x][y]);
		printf("\n");
	}
}
void solution(int board[4][4], int row, int col)
{
	int col_idx;
	int n;

	printf("!!%p\n", &board);
	if (row == 4 && col == 4)
	{
		printf("\nrow: %d, col: %d\n", row, col);
		print_board(board);	
		return;
	}
	
	col_idx = -1;
	while (++col_idx < 4)
	{
		//if currnt box empty
		if (board[row][col_idx] == 0)
		{
			n = 0;
			while (++n <= 4)
				if (is_possible(board, row, col_idx, n))
				{
					board[row][col_idx] = n;
					solution(board, row, col_idx);
					print_board(board);
					//printf("board[%d][%d] = %d\n", row, col_idx, n);
				}
		}
	}
	if(row < 4 )
		solution(board, row + 1, 0);
	
		return;
}
int	main(int argc, char **argv)
{
	int board[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	solution(board, 0, 0);
	return (0);
}

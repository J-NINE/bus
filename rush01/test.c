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

void solution(int board[4][4], int row, int col)
{
	int col_idx;
	int n;

	if (row >= 3 && col >= 3)
	{
		for(int x = 0; x < 4; x++){
			for(int y = 0; y<4; y++){
				printf("%d ", board[x][y]);
			}
			printf("\n");
		}
		return;

	}
	
	col_idx = -1;
	while (++col_idx < 4)
	{
		//if currnt box empty
		if (board[row][col_idx] == 0)
		{
			n = -1;
			while (++n <= 4)
				if (is_possible(board, row, col_idx, n))
				{
					board[row][col_idx] = n;
					break;
					//printf("board[%d][%d] = %d\n", row, col_idx, n);
				}
		}
	}
	printf("\nrow:%d col:%d\n", row, col_idx);
	for(int x = 0; x < 4; x++)
	{
		for(int y = 0; y < 4; y++)
			printf("%d ", board[x][y]);
		printf("\n");
	}
	printf("\n");
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

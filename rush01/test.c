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
/*
int[][]  make_board()
{
	int i;
	int j;
	int board[][];

	board = malloc(sizeof(int*) * 4);
	i = -1;
	//initialze board
	while (++i < 16)
	{
		if(i%4 == 0)
			board[i/4] = malloc(sizeof(int) * 5);
		board[i / 4][i % 4] = 0;//= sight[i/4][i % 4];
	}
	return board;
}
*/
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

	if (row >= 4 && col >= 4)
	{
		//complete
		//print_board
		for(int x = 0; x < 4; x++){
			for(int y = 0; y<4; y++){
				printf("%d ", board[x][y]);
			}
			printf("\n");
		}

	}
	
	col_idx = -1;
	while (++col_idx < 4)
	{
		//if currnt box empty
		if (board[row][col_idx] == 0)
		{
			n = -1;
			while (++n < 4)
			{
				if (is_possible(board, row, col_idx, n))
				{
					board[row][col_idx] = n;
				}
			}
		}
	}
	solution(board, row + 1, 0);
}

int	main(int argc, char **argv)
{
	int board[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	solution(board, 0, 0);
	/*
	int i;
	int j;
	int sight[4][5];
	int board[4][5];

	//sight = malloc(sizeof(int*) * 4);
	i = 0;
	j = -1
		;
	if(argc != 17)
		return (-1);
	while (argv[++i])
		//if('0' <= argv[i] && argv <= '9')
		//return -1;	//ERROE
	{	if (i % 4 == 1)
			//sight[++j] = malloc(sizeof(int) * 5);
		sight[j][(i + 3) % 4] = argv[i][0] - '0';
	}

	//print_board(sight);
	board = make_board();
//	print_board(board);
//	write_board(board);
	solution(board, 0, 0);
	*/
	/*
	for(int x = 0; x<4; x++)
	{
		for(int y = 0; y<4; y++)
		{
			printf("%d ", sight[x][y]);
		}
		printf("\n");
	}
	*/
	return (0);
}

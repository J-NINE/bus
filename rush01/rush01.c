#include <stdio.h>
#include <stdlib.h>

void putboard(int **sight)
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

int**  make_board()
{
	int i;
	int j;
	int **board;

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

void sudoku(int i)
{
	if(idx )
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int **sight;
	int **board;

	sight = malloc(sizeof(int*) * 4);
	i = 0;
	j = -1
		;
	if(argc != 17)
		return (-1);
	while (argv[++i])
		//if('0' <= argv[i] && argv <= '9')
		//return -1;	//ERROE
	{	if (i % 4 == 1)
			sight[++j] = malloc(sizeof(int) * 5);
		sight[j][(i + 3) % 4] = argv[i][0] - '0';

	}

	print_board(sight);
	board = make_board();
	print_board(board);
//	write_board(board);

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

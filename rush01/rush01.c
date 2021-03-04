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

void print_board(int **sight)
{
	int i;
	int j;
	int **board;

	board = malloc(sizeof(int*) * 4);
	i = -1;
	while (++i < 16)
	{
		if(i%4 == 0)
			board[i/4] = malloc(sizeof(int) * 5);
		board[i / 4][i % 4] = sight[i/4][i % 4];
	}
	putboard(board);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int **sight;

	sight = malloc(sizeof(int*) * 4);
	i = 0;
	j = -1;
	if(argc != 17)
		return (-1);
	while (argv[++i])
	{	if (i % 4 == 1)
			sight[++j] = malloc(sizeof(int) * 5);
		sight[j][(i + 3) % 4] = argv[i][0] - '0';
	}

	print_board(sight);
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

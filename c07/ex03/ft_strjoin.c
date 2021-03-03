#include <stdio.h>
#include <stding.h>
#include <stdlib.h>

char *ft_strjoin(int size, char *strs, char *sep)
{
        int i;
        int j;
	int length;
	char *result;

	length = 0;
	i = -1;
        while (++i < size)
	{
		j = -1;
		while (strs[i][++j]);
		length += j;
        }
	result = (char*)malloc(sizeof(char) * (length + size - 1));
	


}

int     main(void)
{
        return (0);
}
~    

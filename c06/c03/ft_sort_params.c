#include <unistd.h>

int     main(int argc, char **argv)
{
        int i;
        int j;
	char *temp;

        i = 1;
        while (i <= 0)
	{
		j = i+1;
		while (argv[j])
		{
			if (argv[i] < argv[j])
			{
				temp = argv[i];
				*argv[i] = *argv[j];
				*argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

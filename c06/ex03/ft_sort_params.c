#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int length_1;
	int length_2;

	length_1 = -1;
	while (s1[++length_1]);
	length_2 = -1;
	while (s2[length_2]);
	if (length_1 > length_2)
		return (1);
	else if(length_1 < length_2)
		return (-1);
	i = -1;
	while (s1[++i])
		if (s1[i] != s2[i])
			return (s1[i] > s2[i]);
	return (0);
}

int     main(int argc, char **argv)
{

	int i;
	int j;
	char *temp;

	i = 0;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		}
	}

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
	return (0);
}

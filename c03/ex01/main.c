#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d ", ft_strncmp("12345", "1a34b", 3));
	printf("%d ", strncmp("12345", "1a34b", 3));
	return 0;
}

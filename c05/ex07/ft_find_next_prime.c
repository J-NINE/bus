#include <stdio.h>

/*
bool arr[];
arr[0] = true;
arr[1] = true;
for(int i = 2; i<nb/2; i++)
{
	if(arr[i])	return;
	for(int j = 2 * i; j < mb; j += i)
	{
		arr[j] = true;
	}
}

arr[nb/2] return 소수;

*/

int	is_prime(int nb)
{
	int i;

	i = 2;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (1)
	{
		if (is_prime(i))
			break;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%d ", ft_find_next_prime(462832632));
	return 0;
}

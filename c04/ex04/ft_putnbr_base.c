#include <unistd.h>
#include <stdio.h>

int is_valid(char * base)
{
	int i;
	int j;

	i = -1;
	while (base[++i])
	{
		if(base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return 0;
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
	}
	if (i == 0 || i == 1)
		return 0;
	return 1;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_i;
	int	result[100];
	int	i;

	i = 0;
	if (is_valid(base))
	{
		if (nbr < 0)
		{
			nbr *= (-1);
			ft_putchar('-');
		}
		base_i = -1;
		while (base[++base_i]);
		while (nbr)
		{
			result[i] = nbr % base_i;
			nbr = nbr / base_i;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[result[i]]);
	}
}

int	main(void)
{	
	//printf("%d ", is_valid("12345678"));
	//printf("%d ", is_valid("1245 asd"));
	ft_putnbr_base(42, "0123456789");
	return 0;
}

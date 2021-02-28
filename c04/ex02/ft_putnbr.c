#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);	
	}
}

int	main(void)
{
	ft_putnbr(42);
	return 0;
}

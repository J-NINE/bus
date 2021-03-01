#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    result = 1;
    if (nb <= 0)
        return 0;
    i = 0;
    while (nb)
    {
        result *= nb;
        nb--;
    }
    return (result);
}

int main(void)
{
    printf("%d", ft_iterative_factorial(3));
    return 0;
}

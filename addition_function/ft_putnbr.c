

#include "libft.h"

void    ft_putnbr(int n)
{
    if (n >= 0 && n < 10)
        ft_putchar('0' + n);
    else if (n < 0)
    {
        write(1, '-', 1);
        ft_putnbr(-n);
    }
    else
    {
        while (n > 0)
        {
            ft_putnbr(n / 10);
            ft_putchar(n % 10);
            n /= 10;
        }
    }
}


#include "libft.h"

void    ft_putnbr(int n)
{
    if (n >= 0 && n < 10)
        ft_putchar('0' + n);
    else if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putchar('0' + n % 10);
    }
}
// int main()
// {

//     ft_putnbr(34989);
//     return (0);
// }
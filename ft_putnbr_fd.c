

#include "../libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n >= 0 && n < 10)
        ft_putchar_fd('0' + n, fd);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
}
    else
    {
        // while (n > 0)
        // {
            ft_putnbr_fd(n / 10, fd);
            ft_putchar_fd('0' + n % 10, fd);
            // n /= 10;
        // }
    }
}
// int main()
// {
//     ft_putnbr_fd(34,1);
// //    ft_putnbr(34989);
//     return (0);
// }
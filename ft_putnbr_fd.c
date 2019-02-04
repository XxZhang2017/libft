/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 00:31:45 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 00:31:47 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
	{
        write(fd, "-2147483648", 11);
	}
    else if (n >= 0 && n < 10)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 00:31:15 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 00:31:17 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr(int n)
{
    if (n >= 0 && n < 10)
        ft_putchar('0' + n);
    else if (n < 0)
    {
        n = -n;
        if (n < 0)
            write(1, "-2147483648", 11);
        else
        {
            ft_putchar('-');
            ft_putnbr(-n);
        }
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 00:27:34 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 00:27:37 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int get_num_len(int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *reg;
    int counter;
    int len_num;

    // if (n == -2147483648)
    //     return "-2147483648";
    len_num = get_num_len(n);
//    printf("the length of num %d\n", len_num);
    reg = ft_strnew(len_num);
    if (!reg)
        return (NULL);
    counter = 0;
    if (n == 0)
        reg[0] = '0';
    else if (n < 0)
    {
        n = -n;
        reg[0] = '-';
        if (n < 0)
        {
            strcpy(&reg[1], "2147483648");
            return (reg);
        }
    }   
    while (n > 0)
    {
        reg[--len_num] = n % 10 + '0';
        n /= 10;
    }
    return (reg);
}

// int main()
// {
//     printf("%s\n", ft_itoa(0));
// }

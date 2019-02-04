/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 00:23:32 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 00:23:45 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_atoi(const char *str)
// {
//     int reg;
//     int flag;

//     reg = 0;
//     flag = 1;
//     while (str && (*str == ' ' || *str == '\t' || *str == '\f'
//     || *str == '\v' || *str == '\r' || *str == '\n'))
//         str++;
//     if (*str == '-')
//     {
//         flag = -1;
//         str++;
//     }    
//     else if (*str == '+')
//         str++;
//     while (*str)
//     {
//         if (ft_isdigit(*str))
//         {
//             reg *= 10;
//             reg += *str - '0';
//         }
//         else
//             return (reg * flag);  
//         str++;     
//     }
//     return (reg * flag);
// }

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == '\n' ||
		*(str + i) == '\t' ||
		*(str + i) == '\r' ||
		*(str + i) == '\v' ||
		*(str + i) == '\f' ||
		*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		num = num * 10 + (*(str + i++) - '0');
	return (num * sign);
}

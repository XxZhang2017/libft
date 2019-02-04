/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:13:14 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:33:54 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    if (!str)
        return (0);
    while (str[i])
        i++;
//    printf("the leg %zu\n", i);
    return (i);
}

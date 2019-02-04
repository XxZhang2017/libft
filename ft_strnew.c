/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:35:42 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:35:45 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    return (char *)ft_memalloc(size + 1);
}

// int main()
// {
//     char    *reg;

//     reg =ft_strnew(5);
//     printf("%s\n", reg);
//     return (0);
// }

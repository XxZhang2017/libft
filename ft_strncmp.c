/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:34:42 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:34:44 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n == 0)
        return (0);
    while (n-- != 0)
    {
        if (*s1 != *s2++)
            return (*(unsigned char *)s1 - *(unsigned char *)--s2);
        if (*s1++ == 0)
            break;
    }
    return (0);
}

// int main()
// {
//     char    *a = "abcdef";
//     char    *b = "abiedg";

//     printf("the original %d\n",strncmp(a, b, 10));
//     printf("mine version %d\n",ft_strncmp(a, b, 10));
//     return (0);
// }

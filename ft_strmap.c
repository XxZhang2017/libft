/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:34:04 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:34:07 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char    *ft_strmap(char const *s, char(*f)(char))
// {
//     int i;

//     i = 0;
//     if (!s || !f)
//         return (NULL);

//     while (s[i])
//     {
//         if (!f(s[i]))
//             return (NULL);
//         i++;
//     }
//     return ((char *)s);
// }

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	if (!s)
		return (NULL);
	new_str = ft_strnew(ft_strlen(s));
	if (!new_str)
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(new_str + i) = f(*(s + i));
	return (new_str);
}

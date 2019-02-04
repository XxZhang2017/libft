/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:34:15 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:34:17 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    ft_strmapi(char *s, void (*f)(unsigned int, char*))
// {
//     unsigned int i;

//     if (!s)
//         return ;
//     i = 0;
//     while (s[i])
//     {
//         f(i, &s[i]);
//         i++;
//     }    
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		*(new_str + i) = f(i, *(s + i));
	return (new_str);
}

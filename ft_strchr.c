/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 17:44:57 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 17:49:02 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (NULL);
}

// int main()
// {
// 	char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char	*d1 = strchr(src, '\0');
// 	char	*d2 = ft_strchr(src, '\0');

// 	if (d1 == d2)
// 		printf("success\n");
// 	// printf("d1 %s\n", d1);
// 	// printf("d2 %s\n", d2);
// 	return (0);
			
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:34:42 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/05 18:41:05 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	while (n-- && *s1 && *s2)
// 		if (*s1++ != *s2++)
// 			return (*(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1));
// 	return (*(unsigned char*)(s1) - *(unsigned char*)(s2));
// }
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *b1;
	unsigned char *b2;
	size_t i;

	if (n == 0)
		return (0);
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (i < n && b1[i])
	{
		if (b1[i] != b2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (b1[i] - b2[i]);
}
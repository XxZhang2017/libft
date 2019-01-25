/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 10:45:15 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 12:00:12 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	int	i;

	i = -1;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	while (++i < n)
	{
		dst[i] = src[i];
		if (src[i] == c)
			return (dst + i + 1);
	}
	return (NULL);
}

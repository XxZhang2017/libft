/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 10:32:10 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 11:59:13 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = -1;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	while (++i < n)
		*(ptr1 + i) = *(ptr2 + i);
	return (dst);
}

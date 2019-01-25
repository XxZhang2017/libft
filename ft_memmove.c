/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:44:59 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 12:00:38 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;
	size_n	i;

	i = 0;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	while (--len >= 0)
		ptr1[len] = ptr2[len];
	return (ptr1);
}

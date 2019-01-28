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
// {
// 	char	*ptr1;
// 	char	*ptr2;
// 	size_t	i;

// 	ptr1 = (char *)dst;
// 	ptr2 = (char *)src;
// 	i = 0;
// 	if ((ptr1 - ptr2) > 0 && (ptr1 - ptr2) < len)
// 	{
// 		while (len-- > 0)
// 			ptr1[len - 1] = ptr2[len - 1];
// 	}
// 	else
// 	{
// 		while (i++ < len)
// 			ptr1[i] = ptr2[i];
// 	}
// 	return (ptr1);
// }
{
	char	*csrc = (char *)src;
	char	*cdest = (char *)dst;
	char	temp[len];
	int	i;
	
	i = 0;
	while (i++ < len)
		temp[i] = csrc[i];
	while (i--)
		cdest[i - 1] = temp[i - 1];
	return (dst);
}
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
	char	*csrc = (char *)src;
	char	*cdest = (char *)dst;
	char	temp[len];
	int	i;
	
	printf("the src is %s\n", csrc);
	printf("the dst is %s\n", cdest);
	i = -1;
	while (++i < len)
		temp[i] = csrc[i];
	while (i--)
		cdest[i] = temp[i];
	return (dst);
}
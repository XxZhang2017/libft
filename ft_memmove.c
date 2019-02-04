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
	int	i;
	
	if (cdest - csrc < (long)len)
	{
		i = (int)len;
		while (i >= 1)
		{
			cdest[i] = csrc[i];
			i--;
		} 
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}

//reference code:
// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	char	*srcc;
// 	char	*dstc;
// 	size_t	i;

// 	i = -1;
// 	srcc = (char *)src;
// 	dstc = (char *)dst;
// 	if (srcc < dstc)
// 		while ((int)(--len) >= 0)
// 			*(dstc + len) = *(srcc + len);
// 	else
// 		while (++i < len)
// 			*(dstc + i) = *(srcc + i);
// 	return (dst);
// }
// int main()
// {
// 	int		size = 128 * 1024 * 1024;

// 	printf("start malloc\n");
// 	char	*dst = (char *)malloc(sizeof(char) * (size + 1));
// 	char	*data = (char *)malloc(sizeof(char) * (size + 1));
// 	printf("malloc finished\n");
// 	memset(data, 'A', size);
// 	printf("memset finished\n");

// 	data[size] = '\0';


// 	if (!dst)
// 		exit(1);
// 	if (!data)
// 		exit(1);
	
// //	dst[size] = '\0';
// 	printf("the data buffer:\n");
// 	printf("%lu\n", strlen(data));

// 	memmove(dst, data, size);
// 	printf("the dst data:\n%lu\n",strlen(dst));
// 	return (0);
// }
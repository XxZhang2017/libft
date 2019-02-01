/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:58:48 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 15:18:33 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	size_t	i;

	i = -1;
	ptr1 = (unsigned char *)s;
	while (++i < n)
	{
		if (ptr1[i] == (unsigned char)c)
			return (ptr1 + i);
	}
	return (NULL);
}

// int main()
// {
// 	char			*src = "/|\x12\xff\x09\x42\042\42|\\";
// 	int				size = 10;

// 	if (memchr(src, '\x42', size) == ft_memchr(src, '\x42', size))
// 		printf("pass\n");
// 	return (0);
// }
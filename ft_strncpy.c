/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 16:51:17 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 17:06:03 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}

// int main()
// {
// 	char	*src = "--> nyancat <--\n\r";
// 			char	dst1[30];
// 			char	dst2[30];
// 			size_t	max = 12;

// 			memset(dst1, 'B', sizeof(dst1));
// 			memset(dst2, 'B', sizeof(dst2));
			
// 			dst1[sizeof(dst1) - 1] = '\0';
// 			dst2[sizeof(dst2) - 1] = '\0';

// 			printf("after memset\n");
// 			printf("%s\n", dst1);
// 			printf("%s\n", dst2);
// 			strncpy(dst1, src, max);
// 			ft_strncpy(dst2, src, max);
// 		if (memcmp(dst1, dst2, 29))
// 		{
// 			printf("there is diff:\n");
// 			printf("%s\n", dst1);
// 			printf("%s\n", dst2);
// 		}
// 			printf("%s\n", dst1);
// 			printf("%s\n", dst2);
// 	return (0);
// 	}
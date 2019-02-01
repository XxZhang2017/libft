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
	printf("start memmove\n");
	char	*csrc = (char *)src;
	char	*cdest = (char *)dst;
	char	temp[len];
	int	i;
	
//	printf("the src is %s\n", csrc);
//	printf("the dst is %s\n", cdest);
	i = -1;
	while (++i < (int)len)
		temp[i] = csrc[i];
	while (i--)
		cdest[i] = temp[i];
	return (dst);
}


int main()
{
	int		size = 128 * 1024 * 1024;

	printf("start malloc\n");
	char	*dst = (char *)malloc(sizeof(char) * (size + 1));
	char	*data = (char *)malloc(sizeof(char) * (size + 1));
	printf("malloc finished\n");
	memset(data, 'A', size);
	printf("memset finished\n");

	data[size] = '\0';


	if (!dst)
		exit(1);
	if (!data)
		exit(1);
	
//	dst[size] = '\0';
	printf("the data buffer:\n");
	printf("%lu\n", strlen(data));

	memmove(dst, data, size);
	printf("the dst data:\n%lu\n",strlen(dst));
	return (0);
}

// [crash]: your memmove does not work with a 128Mo data input !
// [crash]: your memmove crash because it read too many bytes or attempt to read on dst !

// int		size = 10;
// 			char	*dst = electric_alloc(size);
// 			char	*data = electric_alloc(size);

// 			memset(data, 'A', size);

// 			mprotect(dst - 4096 + size, 4096, PROT_WRITE);
// 			mprotect(data - 4096 + size, 4096, PROT_READ);

// 			ft_memmove(dst, data, size);

// 			dst = electric_alloc_rev(size);
// 			data = electric_alloc_rev(size);

// 			memset(data, 'A', size);

// 			mprotect(dst- size, 4096, PROT_WRITE);
// 			mprotect(data - size, 4096, PROT_READ);

// 			ft_memmove(dst, data, size);
// 			exit(TEST_SUCCESS);
// 			);



// SANDBOX_RAISE(
// 			int		size = 128 * 1024 * 1024;
// 			char	*dst = (char *)malloc(sizeof(char) * size);
// 			char	*data = (char *)malloc(sizeof(char) * size);

// 			memset(data, 'A', size);
// 			if (!dst)
// 				exit(TEST_INVISIBLE);
// 			ft_memmove(dst, data, size);
// 			exit(TEST_SUCCESS);
// 			);
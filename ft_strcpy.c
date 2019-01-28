







/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 16:43:59 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 16:51:02 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcpy(char *dest, const char *src)
{
    return ft_memcpy(dest, src, ft_strlen(src) + 1);
}

int	main()
{
	char *ch;
	char des[10];

	ch = "abci33 34";
	printf("%s", ft_strcpy(des, ch));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:38:03 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/05 18:46:36 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	char	*begin;
	char	*pattern;

	if (substr && !ft_strlen(substr))
		return ((char *)str);
	while (*str && len > 0)
	{
		begin = (char *)str;
		pattern = (char *)substr;
		while (len > 0 && *str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
			len--;
		}
		if (!*pattern)
			return (begin);
		str = begin + 1;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:38:03 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/05 13:55:28 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i[3];

	i[0] = 0;
	i[1] = 0;
	if (needle && !ft_strlen(needle))
		return ((char *)haystack);
	while (i[0] < (int)len && haystack[i[0]] && needle[i[1]])
	{
		i[1] = 0;
		if (haystack[i[0]] == needle[i[1]])
		{
			i[2] = i[0];
			while (needle[i[1]] && (haystack[i[0]] == needle[i[1]]) && i[0] < (int)len)
			{
				i[0]++;
				i[1]++;
			}
			if (!needle[i[1]])
				return ((char *)&haystack[i[2]]);
			if (i[0] >= (int)len)
				return (NULL);
			i[0] = i[2];
		}
		i[0]++;
	}
	return (NULL);
}

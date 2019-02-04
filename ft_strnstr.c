/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:38:03 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:38:06 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int	i;
	int j;
	int	temp;

	i = 0;
	j = 0;
	if (!haystack || !needle)
		return  (NULL);
	if (needle && !ft_strlen(needle))
		return ((char *)haystack);
	while (i < (int)len && haystack[i] && needle[j])
	{	
		j = 0;
		if (haystack[i] == needle[j])
		{	
			temp = i;	
			while (needle[j] && (haystack[i] == needle[j]) && i < (int)len)
			{
				i++;
				j++;
			}
			if (!needle[j])
			{
				return ((char *)&haystack[temp]); 
			}
			if (i >= (int)len)
				return (NULL);
			i = temp;
		}
		i++;
	}
	return (NULL);
}

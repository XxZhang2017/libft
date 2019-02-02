/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 17:49:30 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 17:54:52 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int j;
	int	temp;

	i = 0;
	j = 0;
	if (!haystack)
		return  (NULL);
	if (!needle)
		return ((char *)&haystack[ft_strlen(haystack) - 1]);
	while (haystack[i] && needle[j])
	{	
		j = 0;
		if (haystack[i] == needle[j])
		{
			
			temp = i;	
			while (needle[j] && (haystack[i] == needle[j]))
			{
				i++;
				j++;
			}	
			if (!needle[j])
				return ((char *)&haystack[temp]); 
			i = temp;
		}
		i++;
	}
	return (NULL);
}

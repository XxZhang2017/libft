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
		if (haystack[i] == needle[j])
		{
			j = 0;
			temp = i;	
			while (needle[j] && (haystack[i++] == needle[j++]))
				;
			if (!needle[j])
				return ((char *)&haystack[temp]); 
			i = temp;
		}
		i++;
	}
	return (NULL);
}

int main() 
{ 
    // Take any two strings 
    char s1[] = "Geeksfor"; 
    char s2[] = "for"; 
    char*	p1; 
	char*	p2;
  
    // Find first occurence of s2 in s1 
//    p1 = strstr(s1, s2); 
	p2 = ft_strstr(s1, s2); 
    // Prints the result 
    // if (p1) { 
    //     printf("String found\n"); 
    //     printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p1); 
    // } else
    //     printf("String not found\n"); 
	
	if (p2) { 
        printf("String found\n"); 
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p2); 
    } else
        printf("String not found\n"); 
    return 0; 
} 



#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
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
	while (i < (int)len && haystack[i] && needle[j])
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

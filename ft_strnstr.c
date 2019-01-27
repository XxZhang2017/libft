

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int temp;
    int pass;

    if (!haystack)
        return (NULL);
    if (!needle)
        return ((char *)&haystack[ft_strlen(haystack) - 1]);
    i = 0;
    pass = 0;
    while (pass < len && haystack[i] && needle[j])
    {

        if (haystack[i] == needle[j])
        {
            j = 0;
			temp = i;
			while (needle[j] && (haystack[i++] == needle[j++]))
				;
        }
        if (j == ft_strlen(needle) - 1)
			return ((char *)&haystack[j]);
		else 
			i = temp + 1;
        pass++;
    }   
    return (NULL);
}
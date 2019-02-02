




#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
     int  i;

    // if (!s)
    //     return (NULL);
    i = ft_strlen(s) + 1;
    while (i-- >= 0)
    {
        if (s[i] == c)
        {
            return ((char *)&s[i]);
        }
    }
    return (NULL);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		i;

// 	i = (int)ft_strlen(s) + 1;
// 	while (i--)
// 		if (*(s + i) == (char)c)
// 			return ((char *)s + i);
// 	return (NULL);
// }

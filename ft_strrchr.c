




#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;

    if (!s)
        return (NULL);
    i = ft_strlen(s);
    while (--i >= 0)
    {
        if (s[i] == c)
            return (i);
    }
    return (NULL);
}


#include "libft.h"

char    *ft_strmap(char const *s, char(*f)(char))
{
    int i;

    i = 0;
    if (!s || !f)
        return (NULL);

    while (s[i])
    {
        if (!f(s[i]))
            return (NULL);
        i++;
    }
    return ((char *)s);
}
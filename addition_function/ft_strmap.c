

#include "libft.h"

char    *ft_strmap(char const *s, char(*f)(char)))
{
    if (!s || !f)
        return (NULL);

    while (s)
    {
        if (!f(s))
            return (NULL);
        s++;
    }
}
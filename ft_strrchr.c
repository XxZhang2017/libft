




#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int  i;

    if (!s)
        return (NULL);
    i = ft_strlen(s);
    while (--i >= 0)
    {
        printf("start while\n");
        printf("index %d\n", i);
        if (s[i] == c)
        {
            printf("return index %d\n", i);
            return ((char *)&s[i]);
        }
    }
    return (NULL);
}
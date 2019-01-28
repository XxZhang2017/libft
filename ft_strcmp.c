



#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = -1;
    if (!s1)
        return ((unsigned char)s2);
    if (!s2)
        return ((unsigned char)s1); 
    while (s1[++i] && s2[i] && s1[i] == s2[i])
        ;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
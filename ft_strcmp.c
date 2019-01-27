



#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    if (!s1)
        return ((unsigned char)s2);
    if (!s2)
        return ((unsigned char)s1); 
    while (i++ && s1[i] && s2[i] && s1[i] == s2[i])
        ;
    return ((unsigned char)s1 - (unsigned char)s2);
}
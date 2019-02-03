

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *reg;

    if (!s)
        return (NULL);
    reg = ft_strnew(len);
    if (!reg)
        return (NULL);
    ft_strncpy(reg, &s[start], len);
    return (reg);
}


#include "../libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *reg;

    reg = ft_strnew(len + 1);
    ft_strcpy(reg, &s[start]);
    return (reg);
}
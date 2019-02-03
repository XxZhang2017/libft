
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    char    *reg;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    reg = ft_strnew(len);
    if (!reg)
        return (NULL);
    reg = ft_strcat(reg, s1);
    reg = ft_strcat(reg, s2);
    return (reg);
}
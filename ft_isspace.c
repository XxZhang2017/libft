

#include "libft.h"

int     ft_isspace(char a)
{
    if (a == ' ' || a == '\f' || a == '\t' || a == '\v' || a == '\n')
        return (1);
    return (0);
}
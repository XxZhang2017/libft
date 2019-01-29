#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *reg;

    reg = malloc(size);
    if (!reg)
        return (NULL);
    else
        return (ft_memset(reg, 0, size));
}
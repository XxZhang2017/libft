

#include "libft.h"

void    ft_putstr(char const *s)
{
    if (!s)
        write(1,"(null)", 6);
    else
    {
        while (*s)
        {
            write(1, s, 1);
            s++;   
        }
    }
}
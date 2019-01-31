

#include "libft.h"

void    ft_strmapi(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }    
}
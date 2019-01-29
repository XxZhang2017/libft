


#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s)
        return (NULL);
    i = 0;
    while (s[i])//w
    {
        f(i, &s[i]);
        i++;
    }    
}
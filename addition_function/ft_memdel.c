
#include "libft.h"

void    ft_memdel(void **ap)
{
    if (!(*ap) || !ap)
        return (NULL);
    free(*ap);
    *ap =  NULL; 
    return (NULL);
}
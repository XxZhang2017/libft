



#include "libft.h"

char    *ft_strndup(const char *s1, size_t n)
{    
    char    *newptr = ft_strnew(n);
    if (newptr == NULL)
        return (NULL);
    ft_strncpy(newptr, s1, n);
    return newptr;
}
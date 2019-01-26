



#include "libft.h"

char    *strndup(const char *s1, size_t n)
{
    size_t  len;
    
    len = ft_strnlen(s1, n);    
    char    *newptr = (char *)malloc(len + 1);
    if (newptr == NULL)
        return (NULL);
    newptr[len] = '\0';
    return (char *)ft_memcpy(newptr, s, len);
}



#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{

    ft_strncat(dst + ft_strlen(dst), src, dstsize);
    return (dstsize +ft_strlen(dst));
}

#include "libft.h"

int ft_search_sym(char *ch, int sym)
{
    int i;

    i = 0;
    while (*ch && *ch != sym)
    {
        ch++;
        i++;
    }    
    return (i);
}
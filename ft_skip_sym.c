

#include "libft.h"

int ft_skip_sym(char *ch, int sym)
{
    int i;

    i = 0;
    while (ch && ch[i] == sym)
        i++;
    return (i);
}
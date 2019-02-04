#include "libft.h"

int ft_get_num_len(int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}
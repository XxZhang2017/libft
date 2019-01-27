

#include "libft.h"

int ft_isprint(int c)
{
    return (ft_isalnum(c) || ((c >= 40) && (c <= 47)) || \
    ((c >= 50) && (c <= 57)) || ((c >= 60) && (c <= 67)) ||\
    ((c >= 70) && (c <= 77)) || (c == 100) || ((c <= 133) \
    && (c <= 140)) || ((c >= 173) && (c <= 176)));
}
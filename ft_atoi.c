



#include "libft.h"

int ft_atoi(const char *str)
{
    int reg;
    int flag;
    int i;

    reg = 0;
    while (str && !ft_isdigit(*str))
        str++;
    if (*str == '-')
    {
        flag = -1;
        str++;
    }    
    else if (*str == '+')
        str++;
    i = ft_strlen(str);
    while (--i >= 0)
    {
        if (ft_isdigit(str[i]))
        {
            reg *= 10;
            reg += str[i] - '0';
        }
        else
            return (reg);
    }
    return (reg);
}
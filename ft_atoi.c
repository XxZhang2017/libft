



#include "libft.h"

int ft_atoi(const char *str)
{
    int reg;
    int flag;

    reg = 0;
    flag = 1;
    while (str && (*str == ' ' || *str == '\t' || *str == '\f'
    || *str == '\v' || *str == '\r' || *str == '\n'))
        str++;
    if (*str == '-')
    {
        flag = -1;
        str++;
    }    
    else if (*str == '+')
        str++;
    while (*str)
    {
        if (ft_isdigit(*str))
        {
            reg *= 10;
            reg += *str - '0';
        }
        else
            return (reg * flag);  
        str++;     
    }
    return (reg * flag);
}
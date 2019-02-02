



#include "libft.h"

int ft_atoi(const char *str)
{
    int reg;
    int flag;
    int i;

    reg = 0;
    flag = 1;
    while (str && (*str == ' ' || *str == '\t' || *str == '\f'))
        str++;
    if (*str == '-')
    {
        flag = -1;
        str++;
    }    
    else if (*str == '+')
        str++;
    i = ft_strlen(str);
    printf("the string length is %d\n", i);
    while (--i >= 0)
    {
        if (ft_isdigit(str[i]))
        {
            reg *= 10;
            reg += str[i] - '0';
            printf("the reg is %d\n", reg);
        }
        else
            return (reg * flag);
    }
    return (reg * flag);
}
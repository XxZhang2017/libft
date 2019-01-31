

#include "../libft.h"

char    *ft_strnew(size_t size)
{
    return (char *)ft_memalloc(size + 1);
}

// int main()
// {
//     char    *reg;

//     reg =ft_strnew(5);
//     printf("%s\n", reg);
//     return (0);
// }
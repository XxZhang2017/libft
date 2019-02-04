


#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	if (s && f)
		while (*(s + ++i))
			f(i, s + i);
}

// void    ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
//     unsigned int i;

//     if (!s)
//         return ;
//     i = 0;
//     while (s[i])//w
//     {
//         f(i, &s[i]);
//         i++;
//     }    
// }
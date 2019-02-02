

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	int			j;

	i = -1;
	j = (int)ft_strlen(s1);
	while (*(s2 + ++i) && i < (int)n)
		*(s1 + j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}

// char    *ft_strncat(char *s1, const char *s2, size_t n)
// {
//     ft_strncpy(s1 + ft_strlen(s1), s2, n);
//     return (s1);
// }

// int main()
// {
//     char    ch[100] = "i like the cat";
//     char    *append = "   Really?";

//     printf("%s\n", ft_strncat(ch, append, 5));
//     return (0);
// }
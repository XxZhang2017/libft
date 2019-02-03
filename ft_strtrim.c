

#include "libft.h"

// int     ft_isspace(char a)
// {
//     if (a == ' ' || a == '\f' || a == '\t' || a == '\v')
//         return (1);
//     return (0);
// }

// char    *ft_strtrim(char const *s)
// {
//     char *reg;
//     int i;
//     int j;

//     j = ft_strlen(s) - 1;
//     if (!s)
//         return (NULL);
//     reg = ft_strnew(ft_strlen(s));
//     i = 0;
//     j = 0;
//     while (s[i])
//     {
//         if (!ft_isspace(s[i]))
//             break;
//         i++;
//     }
//     while (j > 0)
//     {
//         if (!ft_isspace(s[j]))
//             break;
//         j--;
//     }
//     if (i < j && s[i])
//         reg = ft_strncpy(reg, &s[i], j - i + 1);
//     else
//         reg = "";
//     return (reg);
// }

char	*ft_strtrim(char const *s)
{
	char const *s_end;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	s_end = s + ft_strlen(s) - 1;
	while (*s_end == ' ' || *s_end == '\t' || *s_end == '\n')
		s_end--;
	return (ft_strsub(s, 0, s_end - s + 1));
}
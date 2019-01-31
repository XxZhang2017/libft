

#include "libft.h"

int ft_search(char *ch);
{
    int i;

    i = 0;
    while (*ch && *ch != ' ' && *ch != '\n' && *ch != '\t')
        i++;
    return (i);
}

int ft_skip_space(char *ch);
{
    int i;

    i = 0;
    while (ch && && ch[0] && ch[i] == '\n' && ch[i] == '\t' && ch[i] == ' ')
        i++;
    return (i);
}

char    *ft_strtrim(char const *s)
{
    int index;
    int total_len;
    int str_len;
    char    *reg;

    reg = ft_strnew(total_len);
    total_len = ft_strlen(s);
    index = 0;
    while (index < total_len)
    {
        str_len = ft_search(&s[index]);
        ft_strncat(reg, &s[index], str_len);
        index += str_len + ft_skip_space(&s[index]);
    }
    return (reg);
}

// int main()
// {
//     char    *ch = "abc   990   ppp";
//     printf("%s\n", ch);
//     printf("%s\n", ft_strtrim(ch));

//     return (0);
// }
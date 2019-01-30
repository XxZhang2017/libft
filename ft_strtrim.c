

#include "libft.h"

int ft_search(char *ch)
{
    int i;

    i = 0;
    while (ch && ch[i] != ' ' && ch[i] != '\n' && ch[i] != '\t')
        i++;
    return (i);
}

int ft_skip_space(char *ch)
{
    int i;

    i = 0;
    if (!ch || !ch[0])
        return (0);
    while (ch && (ch[i] == '\n' || ch[i] == '\t' || ch[i] == ' '))
        i++;
    return (i);
}

char    *ft_strtrim(char const *s)
{
    int index;
    int total_len;
    int str_len;
    char    *reg;

    total_len = ft_strlen(s);
    reg = ft_strnew(total_len);
    index = 0;
    while (index < total_len)
    {
        str_len = ft_search((char *)&s[index]);
        ft_strncat(reg, &s[index], str_len);
        index += str_len;
        index += ft_skip_space((char *)&s[index]);
    }
    return (reg);
}

// int main()
// {
//     char    *ch1 = "abc   990   ppp";
//     char    *ch2 = "";
//     char    *ch3 = NULL;
//     char    *ch4 = "abce";
//     char    *ch5 = "popo  ";
// //    printf("%s\n", ch);
//     printf("%s\n", ft_strtrim(ch1));
//     printf("%s\n", ft_strtrim(ch2));
//     printf("%s\n", ft_strtrim(ch3));
//     printf("%s\n", ft_strtrim(ch4));
//     printf("%s\n", ft_strtrim(ch5));

//     return (0);
// }
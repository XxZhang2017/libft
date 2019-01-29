

#include "libft.h"

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
    ft_strncpy(s1 + ft_strlen(s1), s2, n);
    return (s1);
}

int main()
{
    char    ch[100] = "i like the cat";
    char    *append = "   Really?";

    printf("%s\n", ft_strncat(ch, append, 5));
    return (0);
}


#include "libft.h"

// int ft_search_sym(char *ch, int sym)
// {
//     int i;

//     i = 0;
//     while (*ch && *ch != sym)
//     {
//         ch++;
//         i++;
//     }    
//     return (i);
// }

// int ft_skip_sym(char *ch, int sym)
// {
//     int i;

//     i = 0;
//     while (ch && ch[i] == sym)
//         i++;
//     return (i);
// }

// int ft_get_word(char *ch, int c)
// {
//     int count;
//     int state;

//     state = 0;
//     count = 0;
//     while (*ch)
//     {
//         if (*ch == c)
//             state = 1;
//         else if (state == 1)
//         {
//             state = 0;
//             count++;
//         }
//         ch++;
//     }
//     return (count);
// }

char    **ft_strsplit(char const *s, char c)
{
    int index;
    int total_len;
    int str_len;
	int counter;
	int	count;
    char    **reg;
	
        if (!s)
            return (NULL);
		count = ft_gwn_byc((char *)s, c);
//        printf("the words are : %d\n", count);
		reg = (char **)malloc(sizeof(char *) * (count + 1));
    
        if (!reg)
            return (NULL);

		reg[count] = 0;

//        p_arr(reg);
	total_len = ft_strlen(s);
    index = 0;
    counter = 0;
    index += ft_skip_sym((char *)&s[index], c);
    while (index < total_len)
    {
      	str_len = ft_search_sym((char *)&s[index], c);
 //       if (str_len == 0)

		reg[counter] = ft_strnew(str_len);
		ft_strncpy(reg[counter], (char *)&s[index], str_len);
//        printf("after copy %s\n", reg[counter]);
        index += str_len + ft_skip_sym((char *)&s[str_len + index], c);
        counter++;
    }
        return (reg);
}

// int main()
// {
//     char *word = "**am*in****class*";
//     char **reg;

//     reg = ft_strsplit(word, '*');
//     int i;

//     printf("print result\n");
//     i = 0;
//     while (i < 3)
//     {
//         printf("%s\n", reg[i]);
//         i++;
//     }
//     return (0);
// }

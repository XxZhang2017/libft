/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:38:27 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:38:29 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// char    **ft_strsplit(char const *s, char c)
// {
//     int index;
//     int total_len;
//     int str_len;
// 	int counter;
// 	int	count;
//     char    **reg;
	
//         if (!s)
//             return (NULL);
// 		count = ft_gwn_byc((char *)s, c);
// //        printf("the words are : %d\n", count);
// 		reg = (char **)malloc(sizeof(char *) * (count + 1));
    
//         if (!reg)
//             return (NULL);

// 		reg[count] = 0;

// //        p_arr(reg);
// 	total_len = ft_strlen(s);
//     index = 0;
//     counter = 0;
//     index += ft_skip_sym((char *)&s[index], c);
//     while (index < total_len)
//     {
//       	str_len = ft_search_sym((char *)&s[index], c);
//  //       if (str_len == 0)

// 		reg[counter] = ft_strnew(str_len);
// 		ft_strncpy(reg[counter], (char *)&s[index], str_len);
// //        printf("after copy %s\n", reg[counter]);
//         index += str_len + ft_skip_sym((char *)&s[str_len + index], c);
//         counter++;
//     }
//         return (reg);
// }

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


static int		get_word_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str2;

	if (!s || !(str2 = (char **)malloc(sizeof(*str2) *
		(ft_countwords(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(get_word_len(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:35:23 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/05 11:03:55 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}

// int main()
// {
// 	char	*s1 = STRING_1;
// 	char	*s2 = STRING_2;

// 	int		i1 = ft_strnequ(s1, s2, strlen(s1));
// 	printf("%d\n", i1);
// 	if (i1 == 0)
// 		printf("success\n");
// 	return (0);
// }


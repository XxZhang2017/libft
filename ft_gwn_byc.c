/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gwn_byc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 00:25:17 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/05 19:07:31 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_gwn_byc(char *ch, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ch[i])
	{
		if (ch[i] == c)
		{
			while (ch[i] == c)
				i++;
			if (ch[i] && ch[i] != c)
			{
				count++;
				while (ch[i] != c)
					i++;
			}
		}
		else
		{
			count++;
			while (ch[i] != c)
				i++;
		}
	}
	return (count);
}

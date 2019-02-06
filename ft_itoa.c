/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 00:27:34 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/05 22:38:03 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_neg(int n)
{
	char	*reg;
	int		len_num;

	len_num = ft_get_num_len(n);
	reg = ft_strnew(len_num);
	if (!reg)
		return (NULL);
	n = -n;
	reg[0] = '-';
	if (n < 0)
	{
		strcpy(&reg[1], "2147483648");
		return (reg);
	}
	while (n > 0)
	{
		reg[--len_num] = n % 10 + '0';
		n /= 10;
	}
	return (reg);
}

char		*ft_itoa(int n)
{
	char	*reg;
	int		len_num;

	if (n < 0)
	{
		return (ft_itoa_neg(n));
	}
	else
	{
		len_num = ft_get_num_len(n);
		reg = ft_strnew(len_num);
		if (!reg)
			return (NULL);
		if (n == 0)
			reg[0] = '0';
		while (n > 0)
		{
			reg[--len_num] = n % 10 + '0';
			n /= 10;
		}
	}
	return (reg);
}

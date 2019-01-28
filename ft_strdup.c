/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 17:41:24 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 17:44:47 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    int len;
    char    *reg;

    if (!s1)
        return (NULL);
    len = ft_strlen(s1) + 1;
    reg = (char *)malloc(sizeof(char) * len);
    if (reg == NULL)
        return (NULL);
    return (char *)ft_memcpy(reg, s1, len);
}

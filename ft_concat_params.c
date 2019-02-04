/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:59:54 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 00:24:48 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\n';
	return dest;
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}

char *ft_concat_params(int argc, char **argv)
{
	char *reg;
	int i;
	int len;

	i = 1;
	len = 0;
	while (i < argc - 1)
	{
		len += ft_strlen(argv[i]);
		len++;
		i++;
	}
	i = 0;
	reg = (char*)malloc(sizeof(*reg) * len);
	while(i < argc - 1)
	{
		ft_strcat(reg, argv[i]);
		i++;
	}
	return reg;
}

int main(int a, char ** b)
{
	char *k;
	k = ft_concat_params(a,b);
	printf("%s\n",k);

	return 0;
}

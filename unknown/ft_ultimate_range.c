/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:59:04 by xinzhang          #+#    #+#             */
/*   Updated: 2019/02/04 10:40:23 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	count;
	int reg;

	if (max <= min)
	{
		printf("right there\n");
		*range = (void*)0;
		return (0); 
	}
	ptr = (int*)malloc(sizeof(*ptr) * (max - min));
	reg = max - min;
	count = 0;
	while (min < max)
	{
		ptr[count] = min;
		range[count] = &ptr[count];
		min++;
		count++;
	}
	return (reg);
}
int main()
{
	int **l;
	ft_ultimate_range(l,0,0);
	if (l == NULL)
		printf("null\n");
	else
		printf("%d\n",**l);
	return 0;
}

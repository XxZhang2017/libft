

#include "libft.h"

int ft_gwn_byc(char *ch, int c)
{
	int i;
    int count;

	i = 0;
    count = 0;
	if (!ch)
		return (0);
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

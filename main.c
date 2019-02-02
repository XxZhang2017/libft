
//#include "libft.h"
#include "libft.h"
int main() 
{ 
	char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

			char	*d1 = strrchr(src, '\0');
			char	*d2 = ft_strrchr(src, '\0');
			printf("strrcchr return %s\n", d1);
			printf("ft_strrchr return %s\n", d2);
			if (d1 == d2)
				printf("success\n");
			return (0);
} 


	// char	n[40] = "99999999999999999999999999";

	// int		i1 = atoi(n);
	// int		i2 = ft_atoi(n);
	// printf("atoi return %d\n", i1);
	// printf("ft_atoi return %d\n", i2);
	// if (i1 == i2)
	// 	printf("success\n");

	// return (0);
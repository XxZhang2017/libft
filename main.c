
//#include "libft.h"
#include "libft.h"
int main() 
{ 
char	*n = "945";

			int		i1 = atoi(n);
			int		i2 = ft_atoi(n);
			printf("atoi return %d\n", i1);
			printf("ft_atoi return %d\n", i2);
			if (i1 == i2)
				printf("success\n");

			return (0);
} 

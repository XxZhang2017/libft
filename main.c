
//#include "libft.h"
#include "libft.h"


#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

int main() 
{ 
	char	*s1 = "MZIRIBMZIRIBMZE123";
			char	*s2 = "MZIRIBMZE";
			size_t	max = strlen(s2);

			char	*i1 = strnstr(s1, s2, max);
			char	*i2 = ft_strnstr(s1, s2, max);

			printf("strnstr return %s\n", i1);
			printf("ft_strnstr return %s\n", i2);

			if (i1 == i2)
				printf("success\n");
			return (0);

	// char	*str = STRING_1;//"the cake is a lie !\0I'm hidden lol\r\n"
	// 		char	buff1[0xF00] = STRING_2;//"there is no stars in the sky"
	// 		char	buff2[0xF00] = STRING_2;
	// 		size_t	max = strlen(STRING_1) + 4;

	// 		strlcat(buff1, str, max);
	// 		ft_strlcat(buff2, str, max);
			
	// 		printf("strlcat return %s\n", buff1);
	// 		printf("ft_strlcat return %s\n", buff2);
	// 		if (!strcmp(buff1, buff2))
	// 			printf("success\n");
	// 		return (0);
} 


	// char	n[40] = "99999999999999999999999999";

	// int		i1 = atoi(n);
	// int		i2 = ft_atoi(n);
	// printf("atoi return %d\n", i1);
	// printf("ft_atoi return %d\n", i2);
	// if (i1 == i2)
	// 	printf("success\n");

	// return (0);

//#include "libft.h"
#include "libft.h"


#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

int main()
{ 
			char	*i1 = ft_itoa(INT_MIN);
			printf("%s\n", i1);

			return (0);
}
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

// {
// 	char	*s1 = "oh no not the empty string !";
// 			char	*s2 = "";

// 			char	*i1 = strstr(s1, s2);
// 			char	*i2 = ft_strstr(s1, s2);
// 	printf("s1 is %s\n", s1);
// 	printf("s2 is %s\n", s2);
// 	if (i1 == i2)
// 		printf("success\n");

// } 


	// char	n[40] = "99999999999999999999999999";

	// int		i1 = atoi(n);
	// int		i2 = ft_atoi(n);
	// printf("atoi return %d\n", i1);
	// printf("ft_atoi return %d\n", i2);
	// if (i1 == i2)
	// 	printf("success\n");

	// return (0);
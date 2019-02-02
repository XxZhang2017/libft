
//#include "libft.h"
#include "libft.h"
int main() 
{
	char	*s1 = "oh no not the empty string !";
			char	*s2 = "";

			char	*i1 = strstr(s1, s2);
			char	*i2 = ft_strstr(s1, s2);
	printf("s1 is %s\n", s1);
	printf("s2 is %s\n", s2);
	if (i1 == i2)
		printf("success\n");
} 

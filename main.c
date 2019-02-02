
//#include "libft.h"
#include "libft.h"
int main() 
{ 
//    char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

// 			char	*d1 = strrchr(src, '\0');
// 			char	*d2 = ft_strrchr(src, '\0');
// 			printf("d1 is %s\n", d1);
// 			printf("d2 is %s\n", d2);
// 			if (d1 == d2)
// 				printf("pass\n");
	const char *string = "This is a large text";
printf("%zu %zu\n", strlen(string), sizeof(string));
			return (0);
} 

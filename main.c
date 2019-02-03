
//#include "libft.h"
#include "libft.h"


#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

int main()
{
    char	str[] = "i just want this part #############";
			size_t	size = 20;

//			MALLOC_MEMSET;
			char	*ret = ft_strsub(str, 5, size);
//			MALLOC_RESET;
			str[size + 5] = 0;
            if (!memcmp(ret, str + 5, size + 1)) {
				free(ret);
				printf("success\n");
			}
            printf("%s\n", str + 5);
            printf("%s\n", ret);
}
// int main()
// {
//     char	*s1 = "";
// 			char	*s2 = "";

// 			char	*ret = ft_strtrim(s1);
// 			if (!strcmp(ret, s2))
//             {
//                 printf("%s\n",ret);
//                 printf("%s\n", s2);
//                 printf("fail\n");
//             }             
//             else
//             {
//                     printf("success\n");
//             }
            
//     return (0);
// }
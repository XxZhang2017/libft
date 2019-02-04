
//#include "libft.h"
#include "libft.h"


#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

int main()
{
	char	*str1;
	char	*str2;

	str1 = "str1";
	str2 = NULL;
	strlcat(str1, str2, 4);
	return (0);
}
// int main()
// {
//             char	dst1[0xF0];
// 			char	dst2[0xF0];
// 			char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 			int		size = 0xF0 - 0xF;

// 			memset(dst1, 'A', sizeof(dst1));
// 			memset(dst2, 'A', sizeof(dst2));

// 			memcpy(dst1, data, strlen(data));
// 			memcpy(dst2, data, strlen(data));
// 			memmove(dst1 + 3, dst1, size);
// 			ft_memmove(dst2 + 3, dst2, size);

//             dst1[strlen(data) + 1] = '\0';
//             dst2[strlen(data) + 1] = '\0';

//             printf("the data is %s\n", data);
//             printf("dst1 is: %s\n", dst1);
//             printf("dst2 is: %s\n", dst2);

// 			if (!memcmp(dst1, dst2, size))
// 				printf("success\n");
// 			printf("fail\n");
//             return (0);
// }
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
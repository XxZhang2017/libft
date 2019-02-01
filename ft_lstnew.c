#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *tl;

    tl = (t_list *)malloc(sizeof(t_list));
    if (tl == NULL)
        return (NULL);
    if (content == NULL)
    {
        tl->content = NULL;
        tl->content_size = 0;
    }    
    else
    {
        if ((tl->content = malloc(sizeof(t_list))) == NULL)
		{
			free(tl);
			return (NULL);
		}
        ft_memcpy(tl->content, content, content_size);
        tl->content_size = content_size;
    }
    tl->next = NULL;
    return (tl);
}

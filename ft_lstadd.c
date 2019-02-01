#include "libft.h"

void ft_lstadd(t_list **alst, t_list *new)
{
    if (alst && (*alst))
    {
        new->next = (*alst);
        (*alst) = new;    
    }
    else if (!(*alst))
    {
        (*alst) = new;
    }
}

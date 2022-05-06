#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	if (tmp->next != NULL)
		*lst = tmp->next;
	else
		lst = NULL;
	ft_lstdelone(tmp, del);
	ft_lstclear(lst, del);
}
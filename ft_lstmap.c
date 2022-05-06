#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*mapped_head;
	t_list	*mapped;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	l = lst;
	mapped_head = ft_lstnew(f(l->content));
	if (mapped_head == NULL)
		return (NULL);
	while (l->next != NULL)
	{
		l = l->next;
		mapped = ft_lstnew(f(l->content));
		if (mapped == NULL)
		{
			ft_lstclear(&mapped_head, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped_head, mapped);
	}
	return (mapped_head);
}
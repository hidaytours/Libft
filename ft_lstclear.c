/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:40:13 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:40:36 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	*lst = tmp->next;
	ft_lstdelone(tmp, del);
	ft_lstclear(lst, del);
}

/*
#include <stdio.h>
void del(void *content) {
	char *str = (char *)content;
	size_t len = ft_strlen(str);
	for (size_t i = 0; i < len; i++)
		str[i] = '\0';
}
int main() {
	t_list *head = NULL;
	char str1[] = "1st!";
	t_list *first = ft_lstnew(str1);
	char str2[] = "2nd!";
	t_list *second = ft_lstnew(str2);
	char str3[] = "3rd!";
	t_list *third = ft_lstnew(str3);

	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);
	
	t_list *lst;
	for (lst = head; lst != NULL; lst = lst->next) {
		printf(" (%s )> \\(._. )/ ", (char *)lst->content);
	}
	printf("\n");

	printf("before clear head: %p\n", head);
	ft_lstclear(&head, del);
	printf("after clear head: %p\n", head);

	system("leaks -q a.out");
	return (0);
}
*/
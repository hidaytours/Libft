/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:39:42 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:39:57 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	lst->next = NULL;
	free(lst);
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
	ft_lstdelone(first, del);
		for (lst = second; lst != NULL; lst = lst->next) {
		printf(" (%s )> \\(._. )/ ", (char *)lst->content);
	}
	ft_lstdelone(second, del);
	ft_lstdelone(third, del);
	printf("\n");
	system("leaks -q a.out");
	return (0);
}
*/
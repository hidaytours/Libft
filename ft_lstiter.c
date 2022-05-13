/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:40:57 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:41:10 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst) {
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
void f(void *content) {
	printf(" (%s )> \\(^o^ )/ ", (char *)content);
}
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

	ft_lstiter(head, f);
	printf("\n");

	ft_lstclear(&head, del);

	system("leaks -q a.out");
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:41:20 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:41:33 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped_head;
	t_list	*mapped;

	if (lst == NULL || f == NULL)
		return (NULL);
	mapped_head = NULL;
	while (lst != NULL)
	{
		mapped = ft_lstnew(f(lst->content));
		if (mapped == NULL)
		{
			ft_lstclear(&mapped_head, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped_head, mapped);
		lst = lst->next;
	}
	return (mapped_head);
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

void *f_map(void *content) {
	char *str = ft_strdup((char *)content);
	size_t len = ft_strlen(str);
	for (size_t i = 0; i < len; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	return str;
}

void del_map(void *content) {
	char *str = (char *)content;
	size_t len = ft_strlen(str);
	for (size_t i = 0; i < len; i++)
		str[i] = '\0';
	free(content);
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

	t_list *mapped = ft_lstmap(head, f_map, del_map);
	ft_lstclear(&head, del);

	ft_lstiter(mapped, f);
	printf("\n");

	ft_lstclear(&mapped, del_map);

	system("leaks -q a.out");
	return (0);
}
*/
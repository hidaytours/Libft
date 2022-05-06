/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:37:11 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:37:31 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>
int main() {
	char str[] = "Hello, World!";
	t_list *list = ft_lstnew(str);

	printf("list->content: %s\n", (char *)list->content);
	printf("list->next: %s\n", (char *)list->next);
	free(list);
	system("leaks -q a.out");
	return (0);
}
*/
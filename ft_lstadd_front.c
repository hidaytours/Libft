/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:37:44 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:38:04 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int main() {
	char str1[] = "1st!";
	t_list *first = ft_lstnew(str1);
	char str2[] = "2nd!";
	t_list *second = ft_lstnew(str2);
	char str3[] = "3rd!";
	t_list *third = ft_lstnew(str3);

	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, first);

	t_list *lst;
	for (lst = first; lst != NULL; lst = lst->next) {
		printf(" (%s )> \\(._. )/ ", (char *)lst->content);
	}
		printf("\n");

	free(first);
	system("leaks -q a.out");
	return (0);
}
*/
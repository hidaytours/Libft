/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:46:12 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:46:32 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
	printf("ft_lstlast(first)->content: %s\n", \
	(char *)ft_lstlast(first)->content);
	free(first);
	system("leaks -q a.out");
	return (0);
}
*/
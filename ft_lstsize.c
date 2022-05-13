/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:39:23 by toryoshi          #+#    #+#             */
/*   Updated: 2022/05/06 19:39:24 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	if (size > INT_MAX)
		return (-1);
	return (size);
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
		printf(" (%s, size: %d... )> \\(._. )/ ", \
		(char *)lst->content, ft_lstsize(lst));
	}
	printf("\n");
	printf(" (%s, size: %d... )> /(>_< )\\ \n", (char *)NULL, ft_lstsize(NULL));
	free(first);
	system("leaks -q a.out");
	return (0);
}
*/
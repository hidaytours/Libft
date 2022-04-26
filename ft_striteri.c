/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:16:46 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/26 17:10:34 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

/*
#include <stdio.h>
#include <string.h>
#include <assert.h>
static void ft_print_i(unsigned int i, char *c)
{
	printf("%u: %c\n", i, *c);
	return ;
}

static void test_ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	printf("Input: %s\n", s);
	printf("Output:\n");
	ft_striteri(s, f);
}

int main()
{
	test_ft_striteri("abcd234efgH", ft_print_i);
	test_ft_striteri("", ft_print_i);
	test_ft_striteri("a", ft_print_i);
	test_ft_striteri("122333", ft_print_i);
	test_ft_striteri(NULL, ft_print_i);
	test_ft_striteri("abcd234efgH", NULL);
	test_ft_striteri(NULL, NULL);

	printf("---------\n");
	printf("END\n");
	return (0);
}
*/

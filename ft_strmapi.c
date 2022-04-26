/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:15:53 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/26 17:04:11 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ss;

	if (s == NULL)
		return (NULL);
	ss = ft_strdup(s);
	if (ss == NULL)
		return (NULL);
	if (f == NULL)
		return (ss);
	i = 0;
	while (ss[i] != '\0')
	{
		ss[i] = f(i, ss[i]);
		i++;
	}
	return (ss);
}

/*
#include <stdio.h>
#include <string.h>
#include <assert.h>
static char ft_toupper_i(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

static void test_ft_strmapi(char const *s, \
char (*f)(unsigned int, char), \
char *expected)
{
	char *result = ft_strmapi(s, f);
	printf("Input: %s\n", s);
	printf("Output:\n");
	printf("	expected	: %s\n", expected);
	printf("	ft_strmapi	: %s\n", result);
	if (result)
	{
		assert(strcmp(result, expected) == 0);
		free(result);
	}
	else
		assert(result == expected);
}

int main()
{
	test_ft_strmapi("abcd234efgH", ft_toupper_i, "ABCD234EFGH");
	test_ft_strmapi("", ft_toupper_i, "");
	test_ft_strmapi("a", ft_toupper_i, "A");
	test_ft_strmapi("122333", ft_toupper_i, "122333");
	test_ft_strmapi(NULL, ft_toupper_i, NULL);
	test_ft_strmapi("abcd234efgH", NULL, "abcd234efgH");
	test_ft_strmapi(NULL, NULL, NULL);

	printf("---------\n");
	printf("END\n");
	system("leaks -q a.out");
	return (0);
}
*/

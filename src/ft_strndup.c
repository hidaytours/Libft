/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:45:26 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/22 16:45:44 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;

	if (n < 0 || n == SIZE_MAX)
		return (NULL);
	copy = (char *)malloc(sizeof(char) * (n + 1));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s1, n);
	copy[n] = '\0';
	return (copy);
}

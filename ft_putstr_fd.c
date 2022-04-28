/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:17:40 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/26 16:23:35 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
int	main()
{
	int fd = 1;
	ft_putstr_fd("ft_putstr_fd\n", fd);
	ft_putstr_fd("Hel1o, W0rld!!! \\(^o^)/\n", fd);
	ft_putstr_fd(NULL, fd);
	return (0);
}
*/

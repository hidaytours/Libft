/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:18:33 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/26 16:31:24 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int	main()
{
	int fd = 1;
	ft_putendl_fd("ft_putendl_fd", fd);
	ft_putendl_fd("Hel1o, W0rld!!! \\(^o^)/", fd);
	ft_putendl_fd(NULL, fd);
	return (0);
}
*/
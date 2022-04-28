/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:17:22 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/26 16:17:25 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

/*
int	main()
{
	int fd = 1;
	ft_putchar_fd('H', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('1', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd(',', fd);
	ft_putchar_fd(' ', fd);
	ft_putchar_fd('W', fd);
	ft_putchar_fd('0', fd);
	ft_putchar_fd('r', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('d', fd);
	ft_putchar_fd('!', fd);
	ft_putchar_fd('!', fd);
	ft_putchar_fd('!', fd);
	ft_putchar_fd(' ', fd);
	ft_putchar_fd('\\', fd);
	ft_putchar_fd('(', fd);
	ft_putchar_fd('^', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('^', fd);
	ft_putchar_fd(')', fd);
	ft_putchar_fd('/', fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
*/

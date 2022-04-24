#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
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
	ft_putchar_fd('4', -1);
	ft_putchar_fd('2', -42);
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
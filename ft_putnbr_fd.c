#include "libft.h"

static void	ft_putabs_fd(int minus_num, int fd)
{
	if (minus_num <= -10) {
		ft_putabs_fd(minus_num / 10, fd);
		minus_num %= 10;
	}
	ft_putchar_fd((minus_num * -1) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n *= -1;
	ft_putabs_fd(n, fd);
}

/*
int	main()
{
	int fd = 1;
	ft_putnbr_fd(-123, -1);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(123, -1);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(0, -1);
	ft_putchar_fd('\n', fd);
	
	ft_putnbr_fd(-123, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(555, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(2147483647, fd);
	ft_putchar_fd('\n', fd);

	return (0);
}
*/
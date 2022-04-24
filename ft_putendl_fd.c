#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (fd < 0 || s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int	main()
{
	int fd = 1;
	ft_putendl_fd("ft_putendl_fd", fd);
	ft_putendl_fd("ft_putendl_fd", -1);
	ft_putendl_fd("Hel1o, W0rld!!! \\(^o^)/", fd);
	ft_putendl_fd(NULL, fd);
	return (0);
}
*/
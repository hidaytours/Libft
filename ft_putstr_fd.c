#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	size_t i;
	if (fd < 0 || s == NULL)
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
	ft_putstr_fd("ft_putstr_fd\n", -1);
	ft_putstr_fd("Hel1o, W0rld!!! \\(^o^)/\n", fd);
	ft_putstr_fd(NULL, fd);
	return (0);
}
*/
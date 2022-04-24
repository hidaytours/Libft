/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 02:02:51 by toryoshi          #+#    #+#             */
/*   Updated: 2022/04/20 13:29:23 by toryoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_should_cutoff(unsigned long num, unsigned long prev, int sign)
{
	if (sign == -1)
		if (num < prev || num >= ((unsigned long)LONG_MAX + 1))
			return (1);
	if (sign == 1)
		if (num < prev || num >= ((unsigned long)LONG_MAX))
			return (1);
	return (0);
}

static long	ft_simple_strtol(const char *str, int sign)
{
	size_t			i;
	unsigned long	num;
	unsigned long	prev;

	num = 0;
	prev = 0;
	i = 0;
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		if (sign == -1 && ft_should_cutoff(num, prev, sign))
			return (LONG_MIN);
		if (sign == 1 && ft_should_cutoff(num, prev, sign))
			return (LONG_MAX);
		i++;
		prev = num;
	}
	return ((long)(sign * num));
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;

	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	return ((int)ft_simple_strtol(&str[i], sign));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:24:49 by fay               #+#    #+#             */
/*   Updated: 2022/10/25 13:32:46 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list ag, char str)
{
	int	res;

	res = 0;
	if (str == 'c')
		res += ft_putchr(va_arg(ag, int));
	else if (str == 's')
		res += ft_putstr(va_arg(ag, char *));
	else if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(ag, int), &res);
	else if (str == 'u')
		ft_uns(va_arg(ag, unsigned int), &res);
	else if (str == 'p')
	{
		res += write(1, "0x", 2);
		ft_loc(va_arg(ag, unsigned long), &res);
	}
	else if (str == 'x')
		ft_x(va_arg(ag, unsigned int), &res);
	else if (str == 'X')
		ft_bigx(va_arg(ag, unsigned int), &res);
	else if (str == '%')
		res += ft_putchr('%');
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		res;
	int		i;

	i = 0;
	res = 0;
	va_start(ag, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			res += ft_check(ag, str[i]);
		}
		else
			res += ft_putchr(str[i]);
		i++;
	}
	va_end(ag);
	return (res);
}

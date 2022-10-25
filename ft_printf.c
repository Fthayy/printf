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

int	ft_check(va_list ag, char str)
{
	int	res;

	res = 0;
	if (str == 'c')
		res += ft_putchr(va_arg(ag, int));
	if (str == 's')
		res += ft_putstr(va_arg(ag, char *));
	if (str == 'd')
		res += ft_putnbr(va_arg(ag, int));
	if (str == 'u')
		res += ft_uns(va_arg(ag, unsigned int));
	if (str == 'x')
		res += ft_x(va_arg(ag, unsigned int));
	if (str == 'X')
		res += ft_bigx(va_arg(ag, unsigned int));
	if (str == '%')
		res += ft_putchr('%');
	if (str == 'p')
	{
		res += ft_putstr("0x");
		res += ft_loc(va_arg(ag, unsigned int));
	}
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

int	main(void)
{
	int	x;

	char *b, *c;
	x = 15433;
	b = "ahmetfdfghgfdfcvbhjhgfdfghjhgfghjujytrfghuıuytghuyhjfdfgh";
	c = "meh";
	ft_printf("%p ", b);
	printf("%p", b);
}

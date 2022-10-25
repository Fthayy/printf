/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:24:53 by fay               #+#    #+#             */
/*   Updated: 2022/10/25 12:24:54 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb,int *res)
{
	int res;

	res = 0;
	if (nb == -2147483648)
	{
		res += ft_putchr('-');
		res += ft_putchr('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchr('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10,int res);
		ft_putnbr(nb % 10,int res);
	}
	else
		res += ft_putchr(nb + 48);
	return (*res);
}

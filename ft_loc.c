/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:25:18 by fay               #+#    #+#             */
/*   Updated: 2022/10/25 12:25:18 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_loc(unsigned long nbr, int *res)
{
	if (nbr < 16)
	{
		if (nbr < 10)
			*res += ft_putchr(nbr + '0');
		else
			*res += ft_putchr("0123456789abcdef"[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_loc(nbr / 16, res);
		ft_loc(nbr % 16, res);
	}
	return (*res);
}

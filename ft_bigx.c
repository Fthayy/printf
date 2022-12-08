/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigX.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:25:10 by fay               #+#    #+#             */
/*   Updated: 2022/10/25 12:25:11 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_bigx(unsigned int nbr, int *res)
{
	if (nbr < 16)
	{
		if (nbr > 0 && nbr <= 9)
			*res += ft_putchr(nbr + '0');
		else
			*res += ft_putchr("0123456789ABCDEF"[nbr % 16]);
	}
	else
	{
		ft_bigx(nbr / 16, res);
		ft_bigx(nbr % 16, res);
	}
	return (*res);
}

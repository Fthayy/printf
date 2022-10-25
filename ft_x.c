/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:25:05 by fay               #+#    #+#             */
/*   Updated: 2022/10/25 12:25:06 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_x(unsigned int nbr,int *res)
{
	int	res;

	res = 0;
	if (nbr > 0 && nbr <= 9)
		res += ft_putchr(nbr + '0');
	else if (nbr <= 16)
		res += ft_putchr("0123456789abcdef"[nbr % 16]);
	else
	{
		ft_x(nbr / 16,res);
		ft_x(nbr % 16,res);
	}
	return (*res);
}

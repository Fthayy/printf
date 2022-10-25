/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:08:03 by fay               #+#    #+#             */
/*   Updated: 2022/10/25 13:09:14 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_x(unsigned int nbr);
int	ft_uns(unsigned int x);
int	ft_putstr(char *c);
int	ft_putnbr(int nb);
int	ft_putchr(char c);
int	ft_loc(unsigned long nbr);
int	ft_bigx(unsigned int nbr);

#endif

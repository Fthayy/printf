#include "ft_printf.h"

int	ft_putstr(char *c)
{
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
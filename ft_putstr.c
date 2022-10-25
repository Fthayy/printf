#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int i;
	i = 0;
	if (c == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}

	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
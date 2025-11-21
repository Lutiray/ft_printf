#include "ft_printf.h"

int	handle_char(char c)
{
	write(1, &c, 1);
	return (1);
}

// Why not void? We should return int? Why?
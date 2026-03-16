#include "ft_printf.h"

int	handle_decimal(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += handle_decimal(num / 10);
	count += handle_char((num % 10) + '0');
	return (count);
}
#include "ft_printf.h"

int	handle_number(long number)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		count += handle_char('-');
		number *= -1;
	}
	if (number < 10)
	{
		count += handle_char(number + '0');
	}
	else 
	{
		count += handle_number(number / 10);
		count += handle_number(number % 10);
	}
	return (count);
}
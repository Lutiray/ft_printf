#include "ft_printf.h"

int	handle_decimal(unsigned int number)
{
	int	count;

	count = 0;
	if (number < 10)
	{
		count += handle_char((char)(number + '0'));
	}
	else
	{
		count += handle_unsigned(number / 10);
		count += handle_unsigned(number % 10);
	}
	return (count);
}
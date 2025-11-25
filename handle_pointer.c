#include "ft_printf.h"

int	ft_printfp(unsigned long number)
{
	int	count;

	count = 0;
	if (!number)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	count += ft_printfs("0x");
	count += ft_printfx(number, 'x');
	return (count);
}
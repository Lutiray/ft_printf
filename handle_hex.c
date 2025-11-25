#include "ft_printf.h"

int	handle_hex(unsigned long num, char c)
{
	int		count;
	char	*hex_lower;
	char	*hex_upper;

	count = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (num == 0)
		return (handle_char('0'));
	if(num >= 16)
		count += handle_hex(num / 16, c);
	if (c == 'x')
		count += handle_char(hex_lower[num % 16]);
	else
		count += handle_char(hex_upper[num % 16]);
	return (count);
}
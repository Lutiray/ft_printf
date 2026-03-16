#include "ft_printf.h"

int	handle_hex(unsigned long num, char c)
{
	int		count;
	char	*hex;

	count = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if(num >= 16)
		count += handle_hex(num / 16, c);
	count += handle_char(hex[num % 16]);
	return (count);
}
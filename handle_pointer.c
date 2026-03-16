#include "ft_printf.h"

int	handle_pointer(void *ptr)
{
	unsigned long addr;
	int	count;

	count = 0;
	addr = (unsigned long)ptr;
	if (!addr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	count += handle_string("0x");
	count += handle_hex(addr, 'x');
	return (count);
}
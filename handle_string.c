#include "ft_printf.h"

int	handle_string(char *str)
{
	while (str != '\0')
	{
		write(1, &str, 1);
		str++;
	}
	return (1);
} https://www.geeksforgeeks.org/c/how-to-write-your-own-printf-in-c/
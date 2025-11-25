#include "ft_printf.h"

int	handle_string(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		count += handle_char(str[i]);
		i++;
	}
	return (count);
}

#include "ft_printf.h"

int	handle_function(char specifier, va_list arg)
{
	int	count;

	count = 0;
	if (specifier == '%')
		count = handle_char('%');
	else if (specifier == 'c')
		count = handle_char(va_arg(arg, int));
	else if (specifier == 's')
		count = handle_string(va_arg(arg, char *));
	else if (specifier == 'i')
		count = handle_int(va_arg(arg, int));
	else if (specifier == 'd')
		count = handle_number(va_arg(arg, int));
	else if (specifier == 'u')
		count = handle_decimal(va_arg(arg, unsigned int));
	else if (specifier == 'p')
		count = handle_pointer(va_arg(arg, void *));
	else if (specifier == 'x' || specifier == 'X')
		count = handle_hex((unsigned long)va_arg(arg, unsigned int), specifier);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && checkspecifier(str[i + 1]))
		{
			count += handle_function(str[i + 1], args);
			i += 2;
			continue;
		}
		else if (str[i] == '%' && !checkspecifier(str[i + 1]))
		{
			write(1, "Especifier ERROR!", 18);
			return (count);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
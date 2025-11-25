#include "ft_printf.h"

char	checkspecifier(char	symbol)
{
	char	*specifier;
	int		i;

	i = 0;
	specifier = "cspdiuxX%";
	while (specifier[i] != '\0')
	{
		if (symbol == specifier[i])
			return (specifier[i]);
		i++;
	}
	return (0);
}
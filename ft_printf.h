#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *, ...);
int		handle_char(char c);
int		handle_string(char *str);
int		handle_number(long number);
int		handle_hex(unsigned long num, char c);
int		ft_printfp(unsigned long number);
char	checkspecifier(char	symbol);

#endif
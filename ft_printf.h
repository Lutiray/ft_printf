#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *, ...);
char	checkspecifier(char	symbol);
int		handle_char(char c);
int		handle_string(char *str);
int		handle_int(int number);
int		handle_number(int number);
int		handle_decimal(unsigned int number);
int		handle_pointer(void *ptr);
int		handle_hex(unsigned long num, char c);

#endif
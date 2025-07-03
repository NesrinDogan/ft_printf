#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

# define DECIMAL "0123456789"
# define HEX_UP "0123456789ABCDEF"
# define HEX_DOWN "0123456789abcdef"


int	ft_printf(const char *format, ...);
int	ft_print_format(char specifier, va_list args);

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);	// ?? intiger dan büyük sayıda ne olur nasıl çalışır?
int	ft_putunsigned(unsigned int n);
int	ft_puthex(unsigned int n, char format);
int	ft_putptr(unsigned long n);

#endif

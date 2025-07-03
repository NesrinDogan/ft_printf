#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	int		len = 0;
	char	*base;

//	ternary 
//	base = (format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
	
	if (format == 'x')
		base = HEX_DOWN;
	else
		base = HEX_UP;
	
	if (n >= 16)
		len += ft_puthex(n / 16, format);
	len += ft_putchar(base[n % 16]);
	return (len);
}
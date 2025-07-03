#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	int		len = 0;
	char	*base = HEX_DOWN;
	
	if (n >= 16)
		len += ft_putptr(n / 16);
	len += ft_putchar(base[n % 16]);
	return	(len);
}
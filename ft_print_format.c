/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedogan <nedogan@42istanbul.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:54:28 by nedogan           #+#    #+#             */
/*   Updated: 2025/07/04 16:13:18 by nedogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list args)
{
	void	*ptr;

	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_puthex(va_arg(args, unsigned int), specifier));
	else if (specifier == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr == NULL)
			return (ft_putstr("(nil)"));
		write(1, "0x", 2);
		return (2 + ft_putptr((unsigned long long)ptr));
	}
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

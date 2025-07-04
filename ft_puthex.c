/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedogan <nedogan@42istanbul.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:54:39 by nedogan           #+#    #+#             */
/*   Updated: 2025/07/04 16:02:33 by nedogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x')
		base = HEX_DOWN;
	else
		base = HEX_UP;
	if (n >= 16)
		len += ft_puthex(n / 16, format);
	len += ft_putchar(base[n % 16]);
	return (len);
}

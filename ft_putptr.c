/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedogan <nedogan@42istanbul.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:54:45 by nedogan           #+#    #+#             */
/*   Updated: 2025/07/04 13:55:39 by nedogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = HEX_DOWN;
	if (n >= 16)
		len += ft_putptr(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedogan <nedogan@42istanbul.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:54:50 by nedogan           #+#    #+#             */
/*   Updated: 2025/07/04 13:55:41 by nedogan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putunsigned(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}

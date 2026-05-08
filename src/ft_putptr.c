/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 09:56:13 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/11/12 11:59:27 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_base_ptr(uintptr_t nb, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putnbr_base_ptr(nb / 16, count);
		ft_putchar(base[nb % 16], count);
	}
	else
		ft_putchar(base[nb], count);
}

void	ft_putptr(void *ptr, int *count)
{
	if (!ptr)
		ft_putstr("(nil)", count);
	else
	{
		ft_putstr("0x", count);
		ft_putnbr_base_ptr((uintptr_t)ptr, count);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:02:03 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/11/12 11:59:22 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char type, int *count)
{
	char	*base;

	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putnbr_base(nb / 16, type, count);
		ft_putchar(base[nb % 16], count);
	}
	else
		ft_putchar(base[nb], count);
}

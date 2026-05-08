/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:49:37 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/11/12 11:59:25 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	ft_putunsigned(nb, count);
}

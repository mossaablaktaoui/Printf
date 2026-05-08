/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:48:27 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/11/12 11:59:34 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_putunsigned(n / 10, count);
		ft_putchar(n % 10 + '0', count);
	}
	else
		ft_putchar(n + '0', count);
}

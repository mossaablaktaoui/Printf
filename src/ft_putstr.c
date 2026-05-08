/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:49:50 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/11/12 11:59:30 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	if (!str)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (str && *str)
	{
		ft_putchar(*str, count);
		str++;
	}
}

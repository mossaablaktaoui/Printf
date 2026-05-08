/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <mlaktaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:51:55 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/11/12 12:00:48 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_type(const char *format, int *count, va_list *list)
{
	if (*format == 'c')
		ft_putchar(va_arg(*list, int), count);
	else if (*format == 's')
		ft_putstr(va_arg(*list, char *), count);
	else if (*format == 'p')
		ft_putptr(va_arg(*list, void *), count);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(*list, int), count);
	else if (*format == 'u')
		ft_putunsigned(va_arg(*list, unsigned int), count);
	else if (*format == 'x' || *format == 'X')
		ft_putnbr_base(va_arg(*list, unsigned int), *format, count);
	else if (*format == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar((char)format[i], &count);
		else if (format[i] == '%' && format[i + 1])
		{
			check_type(format + i + 1, &count, &list);
			i++;
		}
		i++;
	}
	va_end(list);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:53:50 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/18 19:41:21 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(const char *format, va_list ap)
{
	int	i;

	i = 0;
	format++;
	if (*format == '%')
	{
		write(1, "%", 1);
		i += 1;
	}
	if (*format == 's')
		i += ft_putstr(va_arg(ap, char *));
	if (*format == 'd' || *format == 'i')
		i += ft_putnbr(va_arg(ap, int));
	if (*format == 'c')
		i += ft_putchar(va_arg(ap, int));
	if (*format == 'x')
		i += ft_lower_to_hex(va_arg(ap, unsigned int));
	if (*format == 'p')
		i += ft_get_adress(va_arg(ap, void *));
	if (*format == 'X')
		i += ft_upper_to_hex(va_arg(ap, unsigned int));
	if (*format == 'u')
		i += ft_put_unsigned(va_arg(ap, unsigned int));
	format++;
	return (i);
}

int	main_cycle(const char *format, va_list ap)
{
	int	i;

	i = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format);
			i++;
			format++;
		}
		else
		{
			i += ft_flag(format++, ap);
			format++;
		}
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		symbols_count;

	va_start(ap, format);
	symbols_count = main_cycle(format, ap);
	va_end(ap);
	return (symbols_count);
}

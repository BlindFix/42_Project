/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:54:05 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/18 19:40:52 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_put_hex(unsigned int number)
{
	int	i;

	i = 0;
	if (number <= 9)
		i += ft_putnbr(number);
	else
		i += ft_putchar('a' + number - 10);
	return (i);
}

int	ft_upper_put_hex(unsigned int number)
{
	int	i;

	i = 0;
	if (number <= 9)
		i += ft_putnbr(number);
	else
		i += ft_putchar('A' + number - 10);
	return (i);
}

int	ft_lower_to_hex(unsigned int number)
{
	unsigned int	digit;
	unsigned int	k;
	int				i;

	k = 1;
	i = 0;
	digit = 0;
	while (number / k > 15)
		k = k * 16;
	while (k)
	{
		digit = number / k;
		number = number % k;
		k /= 16;
		i += ft_lower_put_hex(digit);
	}
	return (i);
}

int	ft_upper_to_hex(unsigned int number)
{
	unsigned int	digit;
	unsigned int	k;
	int				i;

	k = 1;
	i = 0;
	digit = 0;
	while (number / k > 15)
		k = k * 16;
	while (k)
	{
		digit = number / k;
		number = number % k;
		k /= 16;
		i += ft_upper_put_hex(digit);
	}
	return (i);
}

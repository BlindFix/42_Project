/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:51:39 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/18 19:53:36 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_ptr_x(unsigned long numb)
{
	int	i;

	i = 0;
	if (numb <= 9)
		i += ft_putnbr(numb);
	else
		i += ft_putchar('a' + numb - 10);
	return (i);
}

int	ft_ptr_to_hex(unsigned long number)
{
	unsigned long	digit;
	unsigned long	k;
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
		i += ft_get_ptr_x(digit);
	}
	return (i);
}

int	ft_get_adress(void *ptr)
{
	int	i;

	i = 2;
	write(1, "0x", 2);
	i += ft_ptr_to_hex((unsigned long)ptr);
	return (i);
}

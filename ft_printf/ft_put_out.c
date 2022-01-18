/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:51:31 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/18 19:41:23 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
	{
		write(1, str++, 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(long int n)
{
	long int	t;
	int			i;

	t = 1;
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		i++;
	}
	while (n / t >= 10)
		t *= 10;
	while (t)
	{
		ft_putchar((n / t) + '0');
		n = n % t;
		t /= 10;
		i++;
	}
	return (i);
}

int	ft_put_unsigned(unsigned int n)
{
	long int	t;
	int			i;

	t = 1;
	i = 0;
	while (n / t >= 10)
		t *= 10;
	while (t)
	{
		ft_putchar((n / t) + '0');
		n = n % t;
		t /= 10;
		i++;
	}
	return (i);
}

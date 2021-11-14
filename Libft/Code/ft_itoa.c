/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:54:16 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/14 15:39:33 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_result(char *result, int n, int stepen, int i)
{
	if (i)
		*result = '-';
	while (stepen > 0)
	{
		result[i] = (n / stepen) % 10 + '0';
		i++;
		stepen /= 10;
	}
}

static void	ft_set_length(int *stepen, int *razr, int n)
{
	*razr = 1;
	*stepen = 1;
	while (n / *stepen > 9)
	{
		*stepen *= 10;
		*razr += 1;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	int		stepen;
	int		razr;
	int		i;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	if (n < 0)
		sign = -1;
	n *= sign;
	ft_set_length(&stepen, &razr, n);
	i = 0;
	if (sign == -1)
		i = 1;
	result = (char *)ft_calloc(razr + i + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_fill_result(result, n, stepen, i);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:35:39 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 20:29:34 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skip_spaces(const char **str)
{
	while (**str == '\t' || **str == '\n' || **str == '\v'
		|| **str == '\r' || **str == '\f' || **str == ' ')
		(*str)++;
}

static int	ft_sign(const char **str)
{
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	if (**str == '+')
		(*str)++;
	return (1);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	ft_skip_spaces(&str);
	sign = ft_sign(&str);
	while (ft_isdigit((int)(*str)))
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}

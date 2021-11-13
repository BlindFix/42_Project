/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:03:03 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 13:36:16 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		byte;

	str = s;
	byte = (unsigned char)c;
	while (n > 0)
	{
		if (*str == byte)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

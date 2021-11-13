/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:49:22 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 00:08:18 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				count;
	unsigned char		*my_dst;
	const unsigned char	*my_src;

	my_dst = (unsigned char *)dst;
	my_src = (const unsigned char *)src;
	if ((!dst && !src) || !len)
		return (dst);
	if (src > dst)
	{
		count = 0;
		while (count < len)
		{
			my_dst[count] = my_src[count];
			count++;
		}
	}
	else
		while (len-- > 0)
			my_dst[len] = my_src[len];
	return (dst);
}

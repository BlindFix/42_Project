/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:49:22 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/14 15:38:44 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*my_dst;
	const unsigned char	*my_src;

	my_dst = (unsigned char *)dst;
	my_src = (const unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
			my_dst[len] = my_src[len];
	}
	return (dst);
}

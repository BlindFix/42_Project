/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:20 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/10 23:14:08 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				count;
	unsigned const char	*kostil_src;
	unsigned char		*kostil_dst;

	count = 0;
	kostil_src = src;
	kostil_dst = dst;
	while (count < n)
		kostil_dst[count] = kostil_src[count++];
	return (dst);
}

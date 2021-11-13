/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:28:23 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 02:56:26 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count_dst;
	size_t	count_src;

	count_dst = 0;
	count_src = 0;
	if (!dstsize || (ft_strlen(dst) >= dstsize))
		return (ft_strlen(dst) + ft_strlen(src));
	while (dst[count_dst] && count_dst < dstsize - 1)
		count_dst++;
	while (src[count_src] && count_src + count_dst < dstsize - 1)
	{
		dst[count_src + count_dst] = src[count_src];
		count_src++;
	}
	dst[count_src + count_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

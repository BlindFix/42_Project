/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:28:23 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/14 16:28:12 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dest;
	const char	*sorc;
	size_t		i;
	size_t		len;

	dest = dst;
	sorc = src;
	i = dstsize;
	while (i-- != 0 && *dest != '\0')
		dest++;
	len = dest - dst;
	i = dstsize - len;
	if (i == 0)
		return (len + ft_strlen(src));
	while (*sorc != '\0')
	{
		if (i != 1)
		{
			*dest++ = *sorc;
			i--;
		}
		sorc++;
	}
	*dest = '\0';
	return (len + (sorc - src));
}

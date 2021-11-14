/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:54:54 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/14 15:22:09 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;
	size_t	size_max;

	size_max = 18446744073709551615UL;
	if (count && (size > size_max / count))
		return (NULL);
	pt = (void *)malloc(count * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, count * size);
	return (pt);
}

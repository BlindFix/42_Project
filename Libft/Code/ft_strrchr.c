/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:48:19 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 04:00:27 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	size_t	i;

	i = 0;
	pt = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			pt = ((char *)(c + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(c + i));
	return (pt);
}

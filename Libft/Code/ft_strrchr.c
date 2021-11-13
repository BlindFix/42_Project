/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:48:19 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 10:59:26 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	char	symbol;
	size_t	i;

	i = 0;
	symbol = (char)c;
	pt = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == symbol)
			pt = ((char *)s + i);
		i++;
	}
	if (symbol == '\0')
		return ((char *)s + i);
	return (pt);
}

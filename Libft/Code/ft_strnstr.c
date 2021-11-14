/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:31:18 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/13 15:34:34 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	small_len;
	size_t	i;
	size_t	j;

	len = ft_min(ft_strlen(haystack), len);
	small_len = ft_strlen(needle);
	if (!small_len)
		return ((char *)haystack);
	i = 0;
	while (i + small_len <= len)
	{
		j = 0;
		while (j < small_len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == small_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

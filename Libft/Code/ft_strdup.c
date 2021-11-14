/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:30:46 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/14 00:44:46 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	count;

	result = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!result)
		return (NULL);
	count = 0;
	while (*s1)
		result[count++] = *s1++;
	return (result);
}

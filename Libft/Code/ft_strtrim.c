/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 02:03:35 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/14 20:32:14 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_instr(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set && set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*result;
	size_t	count;
	size_t	i_left;
	size_t	i_right;

	if (!str)
		return (NULL);
	if (!set)
		return (ft_strdup(str));
	i_left = 0;
	i_right = ft_strlen(str);
	while (str[i_left] && ft_instr(set, str[i_left]))
		i_left++;
	while ((i_right != i_left) && ft_instr(set, str[i_right - 1]))
		i_right--;
	result = (char *)ft_calloc(i_right - i_left + 1, sizeof(char));
	if (!result)
		return (NULL);
	count = 0;
	while (count < i_right - i_left)
	{
		result[count] = str[i_left + count];
		count++;
	}
	return (result);
}

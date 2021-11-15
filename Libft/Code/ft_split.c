/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:11:45 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/15 10:54:15 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_word(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = ft_calloc(sizeof(char), len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static char	**ft_free(char **s_arr)
{
	int	i;

	i = 0;
	while (s_arr[i] != 0)
		free(s_arr[i++]);
	free(s_arr);
	return (NULL);
}

static char	**ft_free2(char **s_arr)
{
	char	**res;
	int		c;

	c = 0;
	while (s_arr[c])
		c++;
	res = ft_calloc(sizeof(char *), c + 1);
	if (!res)
		return (NULL);
	c = 0;
	while (s_arr[c])
	{
		res[c] = s_arr[c];
		c++;
	}
	free(s_arr);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**s_arr;
	int		is_prev_c;
	int		i;

	i = 0;
	is_prev_c = 1;
	if (!s)
		return (NULL);
	s_arr = ft_calloc(sizeof(char *), (ft_strlen(s) + 1) / 2 + 1);
	if (!s_arr)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			is_prev_c = 1;
		else if (is_prev_c)
		{
			s_arr[i] = ft_get_word(s, c);
			if (s_arr[i++] == 0)
				return (ft_free(s_arr));
			is_prev_c = 0;
		}
		s++;
	}
	return (ft_free2(s_arr));
}

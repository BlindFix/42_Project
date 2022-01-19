/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:57:04 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/19 12:02:00 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strjoin2(char *s1, char const *s2)
{
	char	*newstr;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!newstr)
	{
		free(s1);
		return (NULL);
	}
	ft_strlcpy(newstr, s1, s1_len + 1);
	ft_strlcpy(newstr + s1_len, s2, s2_len + 1);
	free(s1);
	return (newstr);
}

static int	ft_read(int fd, char *buf)
{
	int	len;

	len = read(fd, buf, BUFFER_SIZE);
	if (len >= 0)
		buf[len] = '\0';
	return (len);
}

static char	*ft_n_in_buf(char *buf, char *line)
{
	char	*pocket_buf;
	int		i;

	i = 0;
	pocket_buf = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!pocket_buf)
		return (NULL);
	while (buf[i] && buf[i] != '\n')
	{
		pocket_buf[i] = buf[i];
		i++;
	}
	pocket_buf[i] = buf[i];
	if (buf[i])
		ft_strlcpy(buf, buf + i + 1, BUFFER_SIZE + 1);
	else
		ft_memset(buf, 0, BUFFER_SIZE + 1);
	line = ft_strjoin2(line, pocket_buf);
	free(pocket_buf);
	return (line);
}

static char	*ft_to_line(char *buf, int fd, int temp)
{
	char	*line;

	line = (char *)ft_calloc(1, sizeof(char));
	while (temp == BUFFER_SIZE && !ft_strchr(buf, '\n'))
	{
		line = ft_strjoin2(line, buf);
		temp = ft_read(fd, buf);
	}
	if (temp < 0)
	{
		free(line);
		return (NULL);
	}
	line = ft_n_in_buf(buf, line);
	if (!line)
		return (NULL);
	if (line[0])
		return (line);
	free(line);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static int		temp;
	static char		*buf;
	char			*line2;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (!buf)
	{
		buf = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!buf)
			return (NULL);
	}
	if (!buf[0])
		temp = ft_read(fd, buf);
	line2 = ft_to_line(buf, fd, temp);
	if (!buf[0] || !line2)
	{
		free(buf);
		buf = 0;
	}
	return (line2);
}

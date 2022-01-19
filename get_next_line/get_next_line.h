/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:54:30 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/19 12:05:59 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		ft_read(int fd, char *buf);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memset(void *dest, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str1);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char	*ft_strjoin2(char *s1, char const *s2);

#endif

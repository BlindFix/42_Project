/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:20 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/12 19:10:16 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				count;
	unsigned const char	*kostil_src;
	unsigned char		*kostil_dst;

	if (!dst && !src)
		return (NULL);
	count = 0;
	kostil_src = src;
	kostil_dst = dst;
	while (count < n)
	{
		kostil_dst[count] = kostil_src[count];
		count++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = (char *)malloc(10 * sizeof(char));
// 	str1[0] = 'a';
// 	str1[1] = 's';
// 	str1[2] = 'd';
// 	str1[3] = 'f';
// 	str1[4] = 'j';
// 	str1[5] = '\0';
// 	str1[6] = 'x';
// 	str1[7] = 'y';
// 	str1[8] = 'z';
// 	str1[9] = '\0';

// 	str2 = (char *)malloc(5 * sizeof(char));
// 	str2[0] = 'q';
// 	str2[1] = 'w';
// 	str2[2] = 'e';
// 	str2[3] = 'r';
// 	str2[4] = '\0';
// 	ft_memcpy(str2, str1, 10);
// 	printf("%s\n", str2);
// 	printf("%s\n", str2+6);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:19:59 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/12 15:15:17 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*kostil;

	kostil = (unsigned char *)b;
	count = 0;
	while (count < len)
		kostil[count++] = (unsigned char)c;
	return (b);
}

// int	main(void)
// {
// 	char	*str = (char *)malloc(5 * sizeof(char));

// 	str[0] = 'h';
// 	str[1] = 'e';
// 	str[2] = 'l';
// 	str[3] = 'p';
// 	str[4] = '\0';
// 	ft_memset(str, (int)'z', 3);
// 	printf("%s", str);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:05:03 by jdeclan           #+#    #+#             */
/*   Updated: 2021/11/09 22:09:55 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

//int	main(void)
//{
//	printf("%d, %d, %d, %d", ft_isalpha(64),
//		ft_isalpha(65), ft_isalpha(90), ft_isalpha(91));
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:51:47 by jdeclan           #+#    #+#             */
/*   Updated: 2022/01/18 19:53:41 by jdeclan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	main_cycle(const char *format, va_list ap);
int	ft_flag(const char *format, va_list ap);
int	ft_putnbr(long int n);
int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_lower_to_hex(unsigned int dividend);
int	ft_lower_put_hex(unsigned int numb);
int	ft_put_unsigned(unsigned int n);
int	ft_upper_to_hex(unsigned int dividend);
int	ft_upper_put_hex(unsigned int numb);
int	ft_get_adress(void *ptr);
int	ft_ptr_to_hex(unsigned long dividend);
int	ft_get_ptr_x(unsigned long numb);

#endif

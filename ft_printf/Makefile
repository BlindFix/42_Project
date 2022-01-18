# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdeclan <jdeclan@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 15:51:04 by jdeclan           #+#    #+#              #
#    Updated: 2022/01/18 19:13:00 by jdeclan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIST = ft_printf.c	ft_hex.c	ft_put_out.c	ft_pointer.c

OBJS = $(LIST:.c=.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $?

%.o : %.c	$(HEADER)
	gcc $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

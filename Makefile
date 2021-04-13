# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clkuznie <clkuznie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/06 21:59:06 by lchristo          #+#    #+#              #
#    Updated: 2021/03/14 20:35:35 by clkuznie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

FLAGS 		=	-Wall -Werror -Wextra

O		=	$(addsuffix .o, $(SRC))

SRC		=	ft_strlen.s\
			ft_strcpy.s\
			ft_write.s\
			ft_read.s\
			ft_strdup.s

%.o: %.c $H
	$(CC) $I -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $O


debug: $O $H lib/libft/libft.a

clean:


fclean: clean
	/bin/rm -f $(NAME) screenshot.bmp

re:

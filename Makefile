# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 18:11:14 by houaslam          #+#    #+#              #
#    Updated: 2022/11/11 14:12:54 by houaslam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_pr_char.c \
		ft_pr_hex.c \
		ft_pr_nb.c \
		ft_pr_ad.c \
		ft_pr_un.c \
		ft_pr_str.c \
		ft_printf.c \
		ft_pr_hexad.c
		

		
all : ${NAME}

OBJ = ${SRCS:.c=.o}

${NAME} : ${OBJ}
	ar -rc ${NAME} ${OBJ}
	
clean :
	rm -f ${OBJ}

fclean : clean
	rm -f $(NAME)

re: fclean all
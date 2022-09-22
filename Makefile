# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 13:33:25 by smagniny          #+#    #+#              #
#    Updated: 2022/09/22 12:24:12 by smagniny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c 
OBJS = ${SRCS:.c=.o}
NAME = libft.a
COMP = gcc
FLAGS = -Wall -Wextra -Werror
ERASE = rm -rf
INCLUDE = libft.h

all: $(NAME)
$(NAME): $(OBJS) ${INCLUDE}
	@ar rcs $(NAME) $(OBJS)

clean:
	${ERASE} ${OBJS}

fclean: 
	${ERASE} ${OBJS} ${NAME}

re: fclean all

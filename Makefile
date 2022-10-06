# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 13:33:25 by smagniny          #+#    #+#              #
#    Updated: 2022/10/06 18:11:04 by smagniny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_itoa.c  ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c ft_strdup.c
OBJS = ${SRCS:.c=.o}

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c
OBJS_B = ${SRCS_B:.c=.o}
NAME = libft.a
COMP = gcc -Wall -Werror -Wextra
ERASE = rm -rf
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS) libft.h
clean:
	@${ERASE} ${OBJS} ${OBJS_B}
fclean:
	@${ERASE} ${OBJS} ${OBJS_B} ${NAME}

re: fclean all

bonus: 
	make SRCS='$(SRCS) $(SRCS_B)'

so:
	gcc -nostartfiles -fPIC -Wall -Werror -Wextra $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

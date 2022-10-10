# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smagniny <smagniny@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 13:33:25 by smagniny          #+#    #+#              #
#    Updated: 2022/10/10 13:59:49 by smagniny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_itoa.c  ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c ft_strdup.c
OBJS = ${SRCS:.c=.o}

SRCS_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS_B = ${SRCS_B:.c=.o}
NAME = libft.a
ERASE = rm -rf
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	${ERASE} ${OBJS} ${OBJS_B}
fclean:
	${ERASE} ${OBJS} ${OBJS_B} ${NAME}

re: fclean all

bonus: 
	make SRCS='$(SRCS) $(SRCS_B)'

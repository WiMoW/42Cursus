# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wimo <wimo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:33:47 by dacaball          #+#    #+#              #
#    Updated: 2023/09/18 17:52:05 by wimo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_calloc.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc

CFLAGS += -lbsd -Wall -Wextra -Werror 

REMOVE = rm -f

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

clean: 
	$(REMOVE) $(MY_OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

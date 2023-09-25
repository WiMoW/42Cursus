# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:33:47 by dacaball          #+#    #+#              #
#    Updated: 2023/09/26 01:41:57 by dacaball         ###   ########.fr        #
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
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_calloc.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc

CFLAGS += -Wall -Wextra -Werror 

REMOVE = rm -f

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

clean: 
	$(REMOVE) $(MY_OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacaball <dacaball@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 18:07:03 by dacaball          #+#    #+#              #
#    Updated: 2023/10/06 01:50:16 by dacaball         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

MY_SOURCES = ft_printchar_fd.c \
			ft_printdec.c \
			ft_printhexlow.c \
			ft_printhexup.c \
			ft_printptr.c \
			ft_printstr.c \
			ft_printunsigned.c \
			ft_printf.c \
			
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

.PHONY: all clean fclean re

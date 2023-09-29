# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacaball <dacaball@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:33:47 by dacaball          #+#    #+#              #
#    Updated: 2023/09/29 11:14:25 by dacaball         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS_NAME = .bonus

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
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		
BONUS_OBJS = $(MY_BONUS:.c=.o)

CC = cc

CFLAGS += -Wall -Wextra -Werror 

REMOVE = rm -f

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

bonus: $(BONUS_NAME)

clean: 
	$(REMOVE) $(MY_OBJECTS) $(BONUS_OBJS)

fclean: clean
	$(REMOVE) $(NAME) $(BONUS_NAME)

re: fclean all

$(BONUS_NAME): $(MY_OBJECTS) $(BONUS_OBJS)
	ar rcs $(NAME) $(MY_OBJECTS) $(BONUS_OBJS)
	ar rcs $(BONUS_NAME) $(MY_OBJECTS) $(BONUS_OBJS)

.PHONY: all clean fclean re

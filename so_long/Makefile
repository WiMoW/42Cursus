NAME = so_long

SOURCES = main.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS += -Wall -Wextra -Werror -Imlx

REMOVE = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS) 
	$(CC) $(OBJECTS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

mlx/libmlx.a:
	make -C mlx/

run:
	./so_long

clean:
	$(REMOVE) $(OBJECTS)
	make -C mlx/ clean

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
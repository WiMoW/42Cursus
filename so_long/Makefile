###MAC COMPILATION###

#NAME = so_long

#SOURCES = main.c

#OBJECTS = $(SOURCES:.c=.o)

#CC = cc

#CFLAGS += -Wall -Wextra -Werror -Imlx

#REMOVE = rm -f

#all: $(NAME)

#%.o: %.c
#	$(CC) $(CFLAGS) -c $< -o $@

#$(NAME): $(OBJECTS) 
#	$(CC) $(OBJECTS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

#mlx/libmlx.a:
#	make -C mlx/

#run:
#	./so_long

#clean:
#	$(REMOVE) $(OBJECTS)
#	make -C mlx/ clean

#fclean: clean
#	$(REMOVE) $(NAME)

#re: fclean all


###LINUX COMPILATION###

NAME = so_long

SOURCES = main.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS += -Wall -Wextra -Werror -Imlx_linux #-I/usr/include 

REMOVE = rm -f

all: $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJECTS) mlx_linux/minilibx-linux-master/libmlx.a
	$(CC) $(OBJECTS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

mlx_linux/minilibx-linux-master/libmlx.a:
	make -C mlx_linux/

run:
	./$(NAME)

clean:
	$(REMOVE) $(OBJECTS)
	make -C mlx_linux/ clean

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
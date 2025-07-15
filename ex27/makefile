NAME = ft_display_file

CC = gcc

FLAGS = -c -Wall -Werror -Wextra

SRC = $(wildcard src/*.c)

OBJ = $(subst .c,.o,$(subst src,obj,$(SRC)))

all: objFolder $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

$(OBJ): obj%.o : src%.c
	$(CC) $(FLAGS) $< -o $@

objFolder:
	mkdir -p obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

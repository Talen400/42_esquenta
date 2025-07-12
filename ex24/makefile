PROJ_NAME = libft.a

CC = gcc -Wall -Wextra -Werror

C_SRC = $(wildcard srcs/*.c)
H_SRC = ./includes

OBJ = $(subst .c,.o,$(subst srcs,objs,$(C_SRC)))

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	ar rcs $(PROJ_NAME) $(OBJ)
	ranlib $@

$(OBJ): objectFolder

$(OBJ): objs/%.o: srcs/%.c
	$(CC) -I $(H_SRC) -c $< -o $@

objectFolder:
	mkdir -p objs

clean:
	rm -rf objs

fclean: clean
	rm -f $(PROJ_NAME)

re: fclean all

.PHONY: all clean fclean re


NAME = push_swap

SRC = push_swap.c

OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

FLAGS =  -Wall -Werror -Wextra -MMD

%.o: %.c Makefile
	cc $(FLAGS) -c $< -o $@

allmv : make_libs $(NAME)

$(NAME): $(OBJ) 
	@cp ./libft/libft.a .
	cc $(FLAGS) $(OBJ) -o $(NAME)


make_libs: 
	make -s -C ./libft

clean:
	make clean -s -C ./libft
	rm -f libft.a
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)

# Standard
NAME				= push_swap

# Directories
LIBFT				= ./libft/libft.a
# INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I
RM					= rm -f

# Source Files
MOVEMENTS_DIR		=	$(SRC_DIR)movements/swap.c \
						$(SRC_DIR)movements/rev_rotate.c \
						$(SRC_DIR)movements/rotate.c \
						$(SRC_DIR)movements/push.c \
						$(SRC_DIR)movements/sort_stacks.c \
						$(SRC_DIR)movements/sort_three.c \

PUSH_SWAP_DIR		=	$(SRC_DIR)push_swap/handle_errors.c \
						$(SRC_DIR)push_swap/init_a_to_b.c \
						$(SRC_DIR)push_swap/init_b_to_a.c \
						$(SRC_DIR)push_swap/push_swap.c \
						$(SRC_DIR)push_swap/split.c \
						$(SRC_DIR)push_swap/stack_init.c \
						$(SRC_DIR)push_swap/stack_utils.c

# Concatenate all source files
SRCS 				= $(MOVEMENTS_DIR) $(PUSH_SWAP_DIR)

OBJ = $(SRC:.c=.o)

DEP = $(SRC:.c=.d)

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT) $(DEP)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re

-include $(DEP)
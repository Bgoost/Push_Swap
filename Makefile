# Standard
NAME				= push_swap

# Directories
LIBFT				= ./libft/libft.a
INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -MMD -I
RM					= rm -f

# Source Files
MOVEMENTS_DIR		=	$(SRC_DIR)movements/push.c \
						$(SRC_DIR)movements/reverse_rotate.c \
						$(SRC_DIR)movements/rotate.c \
						$(SRC_DIR)movements/swap.c

MAIN_DIR		=	$(SRC_DIR)main_src/stack_init.c \
						$(SRC_DIR)main_src/three_sort.c \
						$(SRC_DIR)main_src/push_swap.c \
						$(SRC_DIR)main_src/stack_utils.c

# Concatenate all source files
SRCS 				= $(MOVEMENTS_DIR) $(MAIN_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))
DEP = $(SRC:.c=.d)
# Build rules
start:				
					@make all

$(LIBFT):
					make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re
-include $(DEP)
#########################################################################################
#       -MAKEFILE-                                                                      #
#       PROJECT: push_swap                                                              #
#########################################################################################
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#########################################################################################
# Directories
#########################################################################################
HDR_DIR = .
SRC_DIR = .

#########################################################################################
# Sources & objects
#########################################################################################
FILES = push_swap \
        push_swap_utils \
		push_swap_utils2 \
		lst \
		errors \
		argument_parse \
		two_and_three_elements \
		algorithm \
		index_and_new_pos \
		prices_and_positions \
		real_moves \
		last_moves \
		free_stuff \
		pushers \
		inverters \
		rotators \
		swappers 
SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

#########################################################################################
# Bonus sources and objects
#########################################################################################
BFILES =
BSRCS = $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(BFILES)))
BOBJS = $(addsuffix .o, $(BFILES))

#########################################################################################
# Colors
#########################################################################################
DEF_COLOR = \033[0;39m
CUT = \033[K
R = \033[31;1m
G = \033[32;1m
Y = \033[33;1m
B = \033[34;1m
P = \033[35;1m
GR = \033[30;1m
END = \033[0m

#########################################################################################
# Rules
#########################################################################################
all: $(NAME)

%.o: %.c
	@echo "$(Y)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS) $(BOBJS)
	@echo "$(R)All .o files removed$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(R)Executable file removed: $(NAME)$(DEF_COLOR)"

re: fclean all

.PHONY: all bonus clean fclean re

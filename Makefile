MAKEFLAGS = --silent --ignore-errors
CC = 		gcc

CFLAGS =	-Wall -Werror -Wextra

NAME = 		libunit.a

RM =		rm -rf

SRC = 	framework/framework_utils.c \
		framework/ft_delst.c \
		framework/ft_output.c \
		framework/load_test.c \
		framework/read_signal.c \
		framework/launch_test.c \



OBJ =		$(SRC:.c=.o)

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -L. -lft
			
$(NAME): 	$(OBJ) libft
			ar rc $(NAME) $(OBJ)


all: 		$(NAME) 

test: all
			make -C real_tests/
			make -C tests/

libft:
			@make -C libft
			@cp libft/libft.a framework/
			@mv framework/libft.a $(NAME)
clean:
			@$(RM) $(OBJ)
			@make clean -C libft
			@make clean -C real_tests
			@make clean -C tests

fclean:		clean
			@$(RM) $(NAME)
			@make fclean -C libft
			@make fclean -C real_tests
			@make fclean -C tests

re: 		fclean all

.PHONY: 	clean fclean
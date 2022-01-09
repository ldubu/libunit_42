MAKEFLAGS = --silent
CC = 		gcc

CFLAGS =	-Wall -Werror -Wextra

NAME = 		libunit.a

RM =		rm -rf

SRC = 	framework_utils.c \
		ft_delst.c \
		ft_output.c \
		load_test.c \
		read_signal.c \
		launch_test.c \



OBJ =		$(SRC:.c=.o)

.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -L. -lft
			
$(NAME): 	$(OBJ) libft
			@ar rc $(NAME) $(OBJ) 


all: 		$(NAME) 

libft:
			@make -C ../libft42
			@cp ../libft42/libft.a .
			@mv libft.a $(NAME)
clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)
			@make fclean -C ../libft42

re: 		fclean all

.PHONY: 	clean fclean libft re
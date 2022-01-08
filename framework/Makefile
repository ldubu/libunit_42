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
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
			
$(NAME): 	$(OBJ)
			@ar rc $(NAME) $(OBJ)


all: 		$(NAME) libft

libft:
			make -c ../libft42
			mv libft.a ../framework
clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re: 		fclean all

.PHONY: 	clean fclean libft re
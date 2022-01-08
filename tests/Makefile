NAME 	=	libunit.a

CC = 		gcc

RM =		rm -rf

SRC 	= 	main.c \
			strlen/00_launcher.c \
			strlen/01_basic_test.c

CFLAGS =	-Wall -Werror -Wextra

OBJ		=	$(SRC:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ)
			@gcc $(FLAGS) $(OBJ) -o $(NAME) -L. -lft
		
clean:
			@$(RM) $(OBJ)

fclean: clean
			@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
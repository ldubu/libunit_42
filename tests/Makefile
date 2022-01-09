NAME 	=	dumb_function_test

CC = 		gcc

RM =		rm -rf

SRC 	= 	main.c \
			dumb_function/00_launcher.c \
			dumb_function/01_test_OK.c \
			dumb_function/02_test_KO.c \
			sigsegv/00_launcher.c \
			sigsegv/01_test_SIGSEVG.c \
			dumb_function/dumb_function.c

CFLAGS =	-Wall -Werror -Wextra

OBJ		=	$(SRC:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ) framework
			gcc $(FLAGS) $(OBJ) -o $(NAME) -L. -lunit

framework:
			make -C ../framework
			cp ../framework/libunit.a ../tests
		
clean:
			@$(RM) $(OBJ)
			@make clean -C ../framework

fclean: clean
			@$(RM) $(NAME) libunit.a
			@make fclean -C ../framework

re: fclean all

.PHONY: all clean fclean re
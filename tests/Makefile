MAKEFLAGS = --silent

NAME 	=	framework_test

CC = 		gcc

RM =		rm -rf

SRC 	= 	main.c \
			dumb_function/00_launcher.c \
			dumb_function/01_test_OK.c \
			dumb_function/02_test_KO.c \
			sigsegv_function/00_launcher.c \
			sigsegv_function/01_test_SIGSEGV.c \
			buserror_function/00_launcher.c \
			buserror_function/01_test_BUSERROR.c \
			dumb_function.c \
			ft_sigsegv.c \
			ft_buserror.c

CFLAGS =	-Wall -Werror -Wextra

OBJ		=	$(SRC:.c=.o)

.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -L. -lft

all: $(NAME)
	
$(NAME): $(OBJ) framework
			@gcc $(FLAGS) $(OBJ) -o $(NAME) -L. -lunit
			@./framework_test

framework:
			@make -C ../framework
			@cp ../framework/libunit.a ../tests
		
clean:
			@$(RM) $(OBJ)

fclean: clean
			@$(RM) $(NAME) libunit.a
			@make fclean -C ../framework

re: fclean all

.PHONY: all clean fclean re
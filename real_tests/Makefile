NAME 	=	real_tests

CC = 		gcc

RM =		rm -rf

SRC 	= 	main.c \
			get_next_line.c \
			get_next_line_utils.c \
			gnl_tester/test_empty.c \
#			real_tests/00_launcher.c \
#			real_tests/01_test_OK.c \
#			real_tests/02_test_KO.c \
			

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
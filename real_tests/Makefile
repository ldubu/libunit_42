#MAKEFLAGS = --silent

NAME 	=	real_tests

CC = 		gcc

RM =		rm -rf

SRC 	= 	main.c \
			get_next_line.c \
			get_next_line_utils.c \
			gnl_tester/00_launcher.c \
			gnl_tester/01_basic_test.c \
			gnl_tester/02_basic_test_end_nl.c \
			gnl_tester/03_multiple_lines.c \
			gnl_tester/04_no_nl_line.c \
			gnl_tester/05_one_nl.c \
			gnl_tester/06_multiple_nl.c \
			gnl_tester/07_test_first_empty.c \
			gnl_tester/08_test_empty.c \
			gnl_tester/09_special_line.c \
			gnl_tester/10_multiple_call.c \
			gnl_tester/11_test_0.c \
			gnl_tester/12_big_line.c \
			gnl_tester/13_wrong_fd.c \
			gnl_tester/14_tabulation.c \
			gnl_tester/15_fichier_sh.c \
			gnl_tester/test_compare.c

CFLAGS =	-Wall -Werror -Wextra

OBJ		=	$(SRC:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ) compile
	@./real_tests

compile:
	@cp ../libunit.a ./
	@gcc $(FLAGS) $(OBJ) -o $(NAME) -L. -lunit

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME) libunit.a

re: fclean all

.PHONY: all clean fclean re
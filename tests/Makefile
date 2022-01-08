NAME 	=	libunit.a

SRC 	= 	../framework/framework_utils.c \
			../framework/ft_delst.c \
			../framework/ft_output.c \
			../framework/load_test.c \
			../framework/read_signal.c \
			../launch_test.c \
			main.c \
			strlen/00_launcher.c \
			strlen/01_basic_test.c

FLAGS	=	-Wall \
			-Wextra \
			-Werror \

OBJ		=	$(SRC:.c=.o)


all: $(NAME)
	
$(NAME): $(OBJ)
			@gcc $(FLAGS) $(OBJ) -o $(NAME) -L. -lft
		
clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
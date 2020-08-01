
NAME = libft.a
SRC = srcs/ft*.c
OBJ = ft*.o
INC = includes
FLAGS = -Wall -Wextra -Werror

all:
	gcc -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

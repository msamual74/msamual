
NAME = liblist.a
SRC = srcs/*.c
OBJ = *.o
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

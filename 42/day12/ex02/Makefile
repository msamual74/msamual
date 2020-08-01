
NAME = ft_tail
SRC = srcs/*.c
FLAGS = -Wall -Wextra -Werror
INC = includes

all:
	gcc  $(FLAGS) -o $(NAME) $(SRC) -L . -lft -L . -llist -I $(INC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

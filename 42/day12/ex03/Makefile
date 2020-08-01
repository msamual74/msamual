NAME = ft_hexdump
SRC = srcs/*.c
INC = includes/
FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -o $(NAME) $(SRC) -I $(INC) -L . -lft -llist

clean:
	rm -f $(NAME)

fclean: clean

re: clean all

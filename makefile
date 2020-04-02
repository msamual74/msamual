
NAME = sudoku
SRC = srcs/ft_check.c srcs/ft_print.c srcs/ft_putchar.c srcs/ft_solve.c \
      srcs/ft_valid.c srcs/ft_square.c srcs/main.c srcs/ft_checkin.c \
      srcs/ft_check_multiple.c srcs/ft_rev_solve.c srcs/ft_rev_check.c
HEADERS = includes/
FLAGS = -Wall -Wextra -Werror

all: 
	gcc $(SRC) -o $(NAME) -I $(HEADERS)

clean:
	rm $(NAME) 

re:
	clean all

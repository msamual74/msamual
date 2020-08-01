
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/ft_strcmp.c \
       srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_putnbr.o ft_strcmp.o ft_strlen.o \
      ft_swap.o
INC = includes

all: make_lib

make_lib:
	gcc -c $(SRCS) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

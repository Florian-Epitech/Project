##
## EPITECH PROJECT, 2020
## makefile graphics
## File description:
## m
##

NAME	=	my_ls

SRC	=	./src/principal_function.c           				\
		./src/error.c										\
		./lib/my/my_putstr.c 								\
		./lib/my/my_putchar.c								\
		./src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall	-Wextra	-g3	-Iinc

all :    $(NAME)

$(NAME):    $(OBJ) $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -f  *~

fclean:		clean
	rm -f $(NAME)

re: fclean all

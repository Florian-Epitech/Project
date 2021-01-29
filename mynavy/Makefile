##
## EPITECH PROJECT, 2020
## makefile graphics
## File description:
## m
##

NAME	=	navy

SRC	=		./src/my_put_nbr.c			\
			./src/my_putchar.c 			\
			./src/my_getnbr.c			\
			./src/my_strcpy.c			\
			./src/my_putstr.c			\
			./src/usage.c				\
			./src/open_read.c			\
			./src/navy.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall	-Wextra	-g3	-Iinc

all :    $(NAME)

$(NAME):    $(OBJ) $(SRCS)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -f  *~

fclean:		clean
	rm -f $(NAME)

re: fclean all

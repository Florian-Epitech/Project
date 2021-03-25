##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

NAME	=	101pong

SRC	=	pong.c

OBJ = $(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -g3 -Iinc

all:    $(NAME)

$(NAME): $(OBJ) $(SRC)
	gcc -o $(NAME) $(OBJ) -lm

clean :
	rm -rf $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all

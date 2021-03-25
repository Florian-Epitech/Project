##
## EPITECH PROJECT, 2021
## B-PSU-101-NCE-1-1-minishell1-florian.bonamy
## File description:
## Makefile
##

NAME	=	mysh

SRC	=		./src/main.c				\
			./src/creation_shell.c		\
			./lib/my/my_putstr.c		\
			./lib/my/my_strcmp.c		\
			./lib/my/my_strlen.c		\
			./lib/my/my_putchar.c		\
			./lib/my/my_getnbr.c		\
			./lib/my/my_put_nbr.c

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

##
## EPITECH PROJECT, 2020
## makefile graphics
## File description:
## m
##

NAME	=	my_hunter

SRC	=	./src/my_hunter.c     	\
		./src/my_hunter2.c    	\
		./src/my_putstr.c		\
		./src/my_strlen.c		\
		./src/my_putchar.c		\
		./src/description.c		\
		./src/main.c

OBJ	=	$(SRC:.c=.o)

FFLAGS	=	-l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lm

CFLAGS	=	-Wall	-Wextra	-g3	-Iinc

all :    $(NAME)

$(NAME):    $(OBJ) $(SRCS)
	gcc -o $(NAME) $(OBJ) $(FFLAGS)

clean:
	rm -rf $(OBJ)
	rm -f  *~

fclean:		clean
	rm -f $(NAME)

re: fclean all

##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## The File
##

SRC	=	./src/function_printf.c							\
		./src/findex_function_myprintf.c				\
		./src/my_printf_scdipercentage.c	   			\
		./src/my_printf_bux.c		 	 				\
		./src/my_printf_xmajo.c		  	 				\
		./lib/my/my_put_nbr.c		 	 				\
		./lib/my/my_putchar.c		  	 				\
		./lib/my/my_putstr.c		  	 				\
		./lib/my/my_strlen.c		   	 				\
		./lib/my/my_put_unsigned.c	 					\
		./lib/my/my_getnbr.c			 				\
		main.c

OBJ = *.o

NAME	=	libmy.a

CFLAGS	=	-Wall -Wextra -g3 -Iinc

all:    $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	rm -f *.o

clean :
	rm -f *.o
	rm -rf #*#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
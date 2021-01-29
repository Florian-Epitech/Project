##
## EPITECH PROJECT, 2020
## makefile
## File description:
## file
##

NAME	=	fizzbuzz

SRC	=	./lib/my/my_putchar.c			 			\
		./lib/my/my_isneg.c			 			\
		./lib/my/my_put_nbr.c			 			\
		./lib/my/my_swap.c			 			\
		./lib/my/my_putstr.c				 		\
		./lib/my/my_strlen.c			 			\
		./lib/my/my_getnbr.c			 			\
		./lib/my/my_compute_power_rec.c		 			\
		./lib/my/my_compute_square_root.c	 			\
		./lib/my/my_is_prime.c			 			\
		./lib/my/my_find_prime_sup.c		 			\
		./lib/my/my_strcpy.c			 			\
		./lib/my/my_strncpy.c			 			\
		./lib/my/my_revstr.c			 			\
		./lib/my/my_strstr.c			 			\
		./lib/my/my_strcmp.c			 			\
		./lib/my/my_strncmp.c			 			\
		./lib/my/my_strupcase.c			 			\
		./lib/my/my_strlowcase.c			 		\
		./lib/my/my_strcapitalize.c		 			\
		./lib/my/my_str_isalpha.c		 			\
		./lib/my/my_str_isnum.c			 			\
		./lib/my/my_str_islower.c		 			\
		./lib/my/my_str_isupper.c		 			\
		./lib/my/my_str_isprintable.c		 			\
		./lib/my/my_strcat.c			 			\
		./lib/my/my_strncat.c						\
		./src/main.c

OBJ	=	${SRC:.c=.o}

CFLAGS = 	-Wall -Wextra -g3		-Iinc

all:	$(NAME)

$(NAME):	$(OBJ) $(SRCS)
	gcc -o $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean  all

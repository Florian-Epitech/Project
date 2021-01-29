##
## EPITECH PROJECT, 2020
## makefile graphics
## File description:
## m
##

NAME	=	my_runner

SRC	=	./src/renderwindow.c									\
		./src/sky.c												\
		./src/music.c											\
		./src/one_function.c									\
		./src/animation_character.c								\
		./src/window.c											\
		./src/jump_character.c									\
		./src/block.c											\
		./src/description.c										\
		./src/parallax_clouds.c									\
		./src/parallax_clouds2.c								\
		./src/parallax_grounds.c								\
		./src/rocks.c											\
		./src/score.c											\
		./src/init.c											\
		./src/game_over.c										\
		./src/menu.c											\
		./src/one_function2.c									\
		./lib/my/my_putstr.c									\
		./lib/my/my_putchar.c									\
		./lib/my/my_strlen.c									\
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

/*
** EPITECH PROJECT, 2020
** usag
** File description:
** the usage
*/

#include "my.h"

void usage(void)
{
    my_putstr("USAGE \n");
    my_putstr("\t./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tfirst_player_pid: only for the 2nd player. pid of the first player.\n");
    my_putstr("\tnavy_positions: file representing the positions of th ships.");
}
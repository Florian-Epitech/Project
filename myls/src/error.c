/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-florian.bonamy
** File description:
** error
*/

#include "../include/my.h"

int error(int ac, char **av)
{
    if (ac == 2 && av[1][0] != '-' && av[1][1] != 'a')
    {
        my_putstr("this file doesn't exist\n");
        return (84);
    }
    return (0);
}
/*
** EPITECH PROJECT, 2020
** main
** File description:
** the main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac == 2) {
        int fd = open_file(av[1]);
    if (fd == -1)
        my_putstr("Fail\n");
    print_the_file(ac, av);
    close(fd);
    } else {
    return (renderwindow());
    }
}
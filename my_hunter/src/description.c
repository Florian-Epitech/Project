/*
** EPITECH PROJECT, 2020
** the h
** File description:
** h
*/

#include "my.h"

int open_file(char const *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    return (fd);
}

int print_the_file(int ac, char **av)
{
    char c = 0;
    int fd = 0;
    (void)ac;

    fd = open_file(av[1]);
    while (read(fd, &c, 1) > 0)
        my_putchar(c);
    close(fd);
    return (0);
}
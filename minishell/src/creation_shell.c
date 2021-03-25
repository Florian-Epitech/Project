/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-florian.bonamy
** File description:
** creation_shell
*/

#include "../include/my.h"

int shell(void)
{
    char *buffer = NULL;
    size_t size = 1024;
    buffer = (char *)malloc(sizeof(char));
    my_putstr("$> ");
    while (getline(&buffer, &size, stdin) > 0)
        my_putstr("$> ");
    my_putstr("exit\n");
    free(buffer);
    return (0);
}
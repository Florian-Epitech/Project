/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-florian.bonamy
** File description:
** my
*/

#ifndef my_h
#define my_h

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int my_getnbr(char const *str);
void my_putchar(char c);
int my_putstr (char const *str);
int my_put_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
int shell(void);
int print_the_file(char **av);
int open_file(char const *filepath);
















#endif
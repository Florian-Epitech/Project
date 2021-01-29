/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#ifndef B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H
#define B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

int ls_function(const char *dir, int ls_s, int ls_a);
int my_putstr (char const *str);
void my_putchar(char c);
int error(int ac, char **av);

#endif //B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H

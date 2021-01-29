/*
** EPITECH PROJECT, 2020
** ls
** File description:
** my_ls
*/

#include "../include/my.h"

int ls_function(const char *dir, int ls_s, int ls_a)
{
    struct dirent *d;
    DIR *give = opendir(dir);
    for (d; (d = readdir(give)) != NULL; d++) {
        if (!ls_a && d->d_name[0] == '.')
            continue;
        my_putstr(d->d_name);
        my_putstr("\t");
        if (ls_s)
            my_putstr("\n");
        }
        if (!ls_s)
        my_putstr("\n");
        return (84);
}
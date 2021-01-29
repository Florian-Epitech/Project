/*
** EPITECH PROJECT, 2020
** main
** File description:
** the main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int ls_s = 0;
    int ls_a = 0;
    char *p = (char *)(av[1] + 1);

    error(ac, av);
    if (ac == 1) {
        ls_function(".", ls_s, ls_a);
    }
    if (ac == 2) {
        if (av[1][0] == '-') {
            while (*p) {
                if (*p == 'a')
                    ls_a = 1;
                if (*p == 's')
                    ls_s = 1;
                p++;
            }
            ls_function(".", ls_s, ls_a);
        }
        return (84);
    }
    return (0);
}
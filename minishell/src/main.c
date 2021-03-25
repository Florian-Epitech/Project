/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/my.h"

void test_cd(void)
{
    const char *const home_data = my_putstr("HOME");
    if (home_data) {
        my_putstr("chdir of ");
        my_putstr(home_data);
        my_putstr(" = ");
        my_put_nbr(chdir(home_data));
    }
}

void send_the_cd(int ac, char **av)
{
    if (ac == 1)
        test_cd();
    if (ac == 2) {
        if (!my_strcmp(av[1], "~"))
            test_cd();
        else {
            my_putstr("chdir of ");
            my_putstr(av[1]);
            my_putstr(" = ");
            my_put_nbr(chdir(av[1]));
            }
        }
}

void enviro(char **env)
{
    int i;
    for (i = 0; env[i] != NULL; i++) {
        my_putstr("\n");
        my_putstr(env[i]);
        }
        my_putstr("\n");
}

int main (int ac, char **av, char **env)
{
    if (ac > 2)
        return (84);
    if (ac == 2 && av[1][0] == '4')
        shell();
    if (ac == 2 && av[1][0] == '3') {
        enviro(env);
    } else
        send_the_cd(ac, av);
    return (0);
}
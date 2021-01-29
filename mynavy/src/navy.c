/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "my.h"

void the_pid(void)
{
    pid_t process_id;
    process_id = getpid();

    my_putstr("my_pid : \n");
    my_put_nbr(process_id);
    my_putstr("\n");
}

void navy_map(void)
{
    char navy_map[170] = {' ', '|', 'A', ' ', 'B', ' ', 'C', ' ', 'D', ' ', 'E', ' ', 'F', ' ', 'G', ' ', 'H', '-', '+', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-' ,'1', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '2', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '3', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '4', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '5', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '6', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '7', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '8', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.'};

    for (int i = 0; i < 170; i++)
    {
        my_putchar(navy_map[i]);

        if (i == 16 || i == 33 || i == 50 || i == 67
        || i == 84 || i == 101 || i == 118 || i == 135 || i == 152 || i == 169)
            my_putstr("\n");
    }
}

int handler_the_signal(int pos1)
{
    my_putstr("Received :\n");
    my_putchar(pos1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        the_pid();
        navy_map();
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();

    int pos1 = my_getnbr(av[1]);
    int pos = SIGKILL;
    struct sigaction signal_receive;
    signal_receive.sa_handler = handler_the_signal;
    pid_t pid = my_getnbr(av[1]);
    int return_signal = sigaction(pos1, &signal_receive, NULL);
    long milisec = 100;
    struct timespec time_def;
    time_def.tv_sec = 10000000;
    time_def.tv_nsec = milisec * 1000000;

    if (ac == 3)
    {
        my_putstr("my_pid : \n");
        my_put_nbr(pid);
        my_putstr("succesfully connected\n");
        kill(pid, pos);
    }
    if (ac == 2)
    {
        if (return_signal < 0) {
            my_putstr("\n");
            return (84);
        }

    my_putstr("my_pid: \n");
    my_putchar(pos1);
    while (1)
    {
            my_put_nbr(getpid());
            my_putstr("waiting for ennemy connection...\n");
            nanosleep(&time_def, (struct timespec *)NULL);
        }
    }
    return (0);
}
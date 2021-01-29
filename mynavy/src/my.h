/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#ifndef B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H
#define B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H

#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ucontext.h>
#include <time.h>

int my_put_nbr(int nb);
void my_putchar(char c);
int my_getnbr(char const *str);
int my_putstr (char const *str);
int kill (pid_t pid, int sig);
void usage(void);
void the_pid(void);
int handler_the_signal(int pos1);
int print_the_file(int ac, char **av);
int open_file(char const *filepath);
void navy_map(void);

#endif //B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H

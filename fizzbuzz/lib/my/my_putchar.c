/*
** EPITECH PROJECT, 2020
** putchar
** File description:
** putcharc
*/

#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
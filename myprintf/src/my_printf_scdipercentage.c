/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** my_printf
*/

#include "../include/my.h"

void my_printf_s(va_list *list)
{
    char *src = va_arg(*list, char *);
    write(1, src, my_strlen(src));
}

void my_printf_c(va_list *list)
{
    char c = va_arg(*list, int);
    write(1, &c, 1);
}

void my_printf_d(va_list *list)
{
    int number = va_arg(*list, int);
    my_put_nbr(number);
}

void my_printf_i(va_list *list)
{
    int number = va_arg(*list, int);
    my_put_nbr(number);
}

void my_printf_percentage(va_list *list)
{
    char c = va_arg(*list, int);
    my_putchar('%');
}
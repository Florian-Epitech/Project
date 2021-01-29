/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#include "../include/my.h"

void my_printf(char *src, ...)
{
    char array[10] = {'s', 'u', 'd', 'i', 'b', 'o', 'x', 'X', '%', 'c'};
    va_list list;
    va_start(list, src);

    void (*tabF[10])(va_list *) = {my_printf_s, my_printf_u, my_printf_d,
    my_printf_i, my_b, my_o, my_x, my_xmaj, my_printf_percentage, my_printf_c};

        for (int a = 0; src[a] != 0; a++) {
            if (a != 0 && src[a - 1] == '%') {
                int index = findex(array, src[a]);
            if (index != -1)
                (*tabF[index])(&list);
        } else if (src[a] != '%')
        write(1, &src[a], 1);
    }
}
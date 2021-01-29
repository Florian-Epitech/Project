/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#include "../include/my.h"

void my_printf_xmaj(int number)
{
    int X = 0;

    if (number >= 16) {
        X = number % 16;
        number /= 16;
        my_printf_xmaj(number);
    } else if (number > 0) {
        X = number % 16;
        number /= 16;
    }
    if (X > 9)
        my_putchar(X + 55);
    else
        my_putchar(48 + X);
}

void my_xmaj(va_list *list)
{
    int a = va_arg(*list, int);
    my_printf_xmaj(a);
}

void my_printf_o2(int number)
{
    int o = 0;

    if (number >= 8) {
        o = number % 8;
        number /= 8;
        my_printf_o2(number);
    }else if (number > 0) {
        o = number % 8;
        number /= 8;
    }
    my_putchar(48 + o);
}

void my_o(va_list *list)
{
    int a = va_arg(*list, int);
    my_printf_o2(a);
}
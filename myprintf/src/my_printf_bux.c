/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#include "../include/my.h"

void my_printf_b(int number)
{
    int b = 0;

    if (number >= 2) {
        b = number % 2;
        number /= 2;
        my_printf_b(number);
    }else if (number > 0) {
            b = number % 2;
            number /= 2;
    }
    my_putchar(48 + b);
}

void my_b(va_list *list)
{
    int a = va_arg(*list, int);

    my_printf_b(a);
}

void my_printf_u(va_list *list)
{
    unsigned int number = va_arg(*list, unsigned int);
    my_put_nbr_unsigned(number);
}

void my_printf_x(int number)
{
    int x = 0;

    if (number >= 16) {
        x = number % 16;
        number /= 16;
        my_printf_x(number);
    }
    else if (number > 0) {
        x = number % 16;
        number /= 16;
    }
    if (x > 9)
        my_putchar(x + 87);
    else
        my_putchar(48 + x);
}

void my_x(va_list *list)
{
    int a = va_arg(*list, int);
    my_printf_x(a);
}
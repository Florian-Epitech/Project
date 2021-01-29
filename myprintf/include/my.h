/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCE-1-1-myprintf-florian.bonamy
** File description:
** TODO: add description
*/

#ifndef B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H
#define B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c);
int my_putstr (char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
unsigned int my_put_nbr_unsigned(unsigned int number);

int findex(char *tab, char find);
void my_printf(char *src, ...);
void my_printf_s(va_list *list);
void my_printf_c(va_list *list);
void my_printf_d(va_list *list);
void my_printf_i(va_list *list);
void my_printf_b(int number);
void my_b(va_list *list);
void my_printf_o2(int number);
void my_o(va_list *list);
void my_printf_x(int number);
void my_x(va_list *list);
void my_xmaj(va_list *list);
void my_printf_xmaj(int number);
void my_printf_percentage(va_list *list);
void my_printf_u(va_list *list);


#endif //B_PSU_100_NCE_1_1_MYPRINTF_FLORIAN_BONAMY_MY_H

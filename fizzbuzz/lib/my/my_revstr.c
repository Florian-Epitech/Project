/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** str
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    int c = 0;
    char *d = str;
    char e;

    while (str[a] != '\0')
        a++;
    a--;
    c = a / 2;
    while (a > c){
        e = d[b];
        str[b] = d[a];
        str[a] = e;
        b++;
        a--;
    }
    return (str);
}
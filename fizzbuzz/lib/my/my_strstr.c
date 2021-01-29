/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** str
*/

#include "../../include/my.h"

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;
    int b = 0;
    int character = my_strlen(to_find);
    int x = 0;

    while (str[a] != '\0'){
        while (str[a] == to_find[b] && to_find[a] != '\0'){
            a++;
            b++;
        }
        x = a - b;
        if (character == b)
            return (str + x);
        else
            return (NULL);
    }
    return (0);
}
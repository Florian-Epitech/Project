/*
** EPITECH PROJECT, 2020
** strcapitalize
** File description:
** capitalize
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\n'; i++){
        if (str[i] == ' ' || str[i] == '-'){
            if (str[i+1] < 123 && str[i+1] > 96){
                str[i+1] -= 32;
            }
        }else if (i == 0 && str[0] < 123 && str[0] > 96){
            str[0] -= 32;
        }
    }
    return (str);
}
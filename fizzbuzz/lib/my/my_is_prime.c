/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** prime
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    if (nb <= 0)
        return (0);
    int a = 2;
    while (a != nb){
        int a = nb % a;
        if (a == 0){
            return (0);
        }
        a++;
    }
    return (1);
}
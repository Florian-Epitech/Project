/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** prime sup
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    if (nb == 0 || nb == 1)
        return (2);
    int a = 0;
    if (my_is_prime(nb) == 1){
        return (nb);
    }
    for (int i = nb; my_is_prime(i) != 1; i++){
        a++;
    }
    return (nb + a);
}
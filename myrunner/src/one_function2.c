/*
** EPITECH PROJECT, 2021
** one
** File description:
** function2
*/

#include "../include/my.h"

void score_function(sfRenderWindow *window,
t_animation_t *animation)
{
    number_score(window, animation);
}

void clock_function(sfRenderWindow *window,
t_animation_t *animation)
{
    clock_jump(animation, animation);
    clock_animation_character(animation);
    clock_score(window, animation);
}

void rect_function(t_animation_t *animation)
{
    rect_character_animation(animation);
    rect_number(animation);
}
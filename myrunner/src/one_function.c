/*
** EPITECH PROJECT, 2020
** runner4
** File description:
** runner 4
*/

#include "../include/my.h"

void functions_display_background(sfRenderWindow *window)
{
    sky(window);
    rock1(window);
    rock2(window);
    score(window);
}

void function_display_blocks(sfRenderWindow *window,
t_animation_t *block_sprite,
t_animation_t *block2_sprite,
t_animation_t *block3_sprite)
{
    block_1(window, block_sprite);
    block_2(window, block2_sprite);
    block_3(window, block3_sprite);
}

void function_display_clouds(sfRenderWindow *window,
t_animation_t *cloud1_1,
t_animation_t *cloud_1_2)
{
    cloud1(window, cloud1_1);
    cloud1_2_move(window, cloud_1_2);
}

void function_display_clouds2(sfRenderWindow *window,
t_animation_t *cloud_2_2,
t_animation_t *cloud2_2)
{
    cloud2(window, cloud2_2);
    cloud2_2_move(window, cloud_2_2);
}

void function_display_ground(sfRenderWindow *window,
t_animation_t *ground1,
t_animation_t *ground2)
{
    ground(window, ground1);
    ground_2(window, ground2);
}
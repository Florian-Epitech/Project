/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-florian.bonamy
** File description:
** init
*/

#include "../include/my.h"

void init_pos(t_animation_t *animation)
{
    animation->pos_ground1.x = 1920;
    animation->pos_cloud1_2.x = 1920;
    animation->pos_cloud2_2.x = 1920;
    animation->pos_character_animation.x = 150;
    animation->pos_character_animation.y = 850;
    animation->pos_block1.x = 1500;
    animation->pos_block1.y = 500;
    animation->pos_block2.x = 1000;
    animation->pos_block2.y = 800;
    animation->pos_block3.x = 700;
    animation->pos_block3.y = 600;
    animation->menu_blocked = 1;
    animation->clock_animation = sfClock_create();
    animation->clock_number_score = sfClock_create();
    animation->clock_jump = sfClock_create();
}
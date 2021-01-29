/*
** EPITECH PROJECT, 2020
** animation
** File description:
** animation
*/

#include "../include/my.h"

void clock_animation_character(t_animation_t *animation)
{
    animation->time_animation = sfClock_getElapsedTime
    (animation->clock_animation);
    animation->seconds_animation =
    animation->time_animation.microseconds / 1000000.0;
    if (animation->seconds_animation < 0.10)
        animation->rect_animation_character.left = 0;
    if (animation->seconds_animation > 0.20)
        animation->rect_animation_character.left = 165;
    if (animation->seconds_animation > 0.30)
        animation->rect_animation_character.left = 330;
    if (animation->seconds_animation > 0.40)
        animation->rect_animation_character.left = 165;
    if (animation->seconds_animation > 0.50)
        sfClock_restart(animation->clock_animation);
}

void animation_character(sfRenderWindow *window, t_animation_t *animation)
{
    animation->texture_animation_character =
    sfTexture_createFromFile("./sprite/croaw.png", NULL);
    animation->sprite_animation_character = sfSprite_create();
    sfVector2f scale_character = {1, 1};
    sfSprite_setScale(animation->sprite_animation_character, scale_character);
    sfSprite_setTexture(animation->sprite_animation_character,
    animation->texture_animation_character, sfFalse);
    sfSprite_setTextureRect(animation->sprite_animation_character,
    animation->rect_animation_character);
    sfSprite_setPosition(animation->sprite_animation_character,
    animation->pos_character_animation);
    sfRenderWindow_drawSprite(window,
    animation->sprite_animation_character, NULL);
}

void rect_character_animation(t_animation_t *animation)
{
    animation->rect_animation_character.top = 0;
    animation->rect_animation_character.left = 0;
    animation->rect_animation_character.width = 185;
    animation->rect_animation_character.height = 160;
}
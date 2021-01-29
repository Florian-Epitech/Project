/*
** EPITECH PROJECT, 2021
** score
** File description:
** score
*/

#include "../include/my.h"

void score(sfRenderWindow *window)
{
    sfText *text;
    sfFont *font;
    sfVector2f position = {10, 10};
    font = sfFont_createFromFile("./font/SuperMario256.ttf");
    text = sfText_create();
    sfText_setPosition(text, position);
    sfText_setColor(text, sfRed);
    sfText_setString(text, "You're score :");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfRenderWindow_drawText(window, text, NULL);
}

void number_score(sfRenderWindow *window, t_animation_t *animation)
{
    sfTexture *texture_number = sfTexture_createFromFile("./sprite/number1."
    "png", NULL);
    sfSprite *sprite_number = sfSprite_create();
    sfVector2f position_number = {440, 15};
    sfVector2f scale_number =  {0.4, 0.4};
    sfSprite_setScale(sprite_number, scale_number);
    sfSprite_setTexture(sprite_number, texture_number, sfFalse);
    sfSprite_setTextureRect(sprite_number, animation->number_rect);
    sfSprite_setPosition(sprite_number, position_number);
    sfRenderWindow_drawSprite(window, sprite_number, NULL);
}

void rect_number(t_animation_t *animation)
{
    animation->number_rect.top = 0;
    animation->number_rect.left = 0;
    animation->number_rect.width = 100;
    animation->number_rect.height = 135;
}

void clock_score(sfRenderWindow *window, t_animation_t *animation)
{
    animation->time_score = sfClock_getElapsedTime
    (animation->clock_number_score);
    animation->seconds_score =
    animation->time_score.microseconds / 1000000.0;
    if (animation->seconds_score < 35)
        animation->number_rect.left = 0;
    if (animation->seconds_score > 50)
        animation->number_rect.left = 925;
    if (animation->seconds_score > 65)
        animation->number_rect.left = 100;
    if (animation->seconds_score > 80)
        animation->number_rect.left = 205;
    if (animation->seconds_score > 95)
        animation->number_rect.left = 305;
    if (animation->seconds_score > 110)
        animation->number_rect.left = 405;
    if (animation->seconds_score > 125){
        sfClock_restart(animation->clock_number_score);
        sfRenderWindow_close(window);
    }
}
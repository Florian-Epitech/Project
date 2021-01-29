/*
** EPITECH PROJECT, 2021
** parallax
** File description:
** grounds
*/

#include "../include/my.h"

void rock1(sfRenderWindow *window)
{
    sfTexture *texture_rock1 = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/rocks_1.png", NULL);
    sfSprite *sprite_rock1 = sfSprite_create();
    sfSprite_setTexture(sprite_rock1, texture_rock1, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_rock1, NULL);
    sfTexture_destroy(texture_rock1);
    sfSprite_destroy(sprite_rock1);
}

void rock2(sfRenderWindow *window)
{
    sfTexture *texture_rock2 = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/rocks_2.png", NULL);
    sfSprite *sprite_rock2 = sfSprite_create();
    sfSprite_setTexture(sprite_rock2, texture_rock2, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_rock2, NULL);
    sfTexture_destroy(texture_rock2);
    sfSprite_destroy(sprite_rock2);
}
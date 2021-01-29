/*
** EPITECH PROJECT, 2020
** runner 2
** File description:
** runner
*/

#include "../include/my.h"

void sky(sfRenderWindow *window)
{
    sfTexture *texture_sky = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/sky.png", NULL);
    sfSprite *sprite_sky = sfSprite_create();
    sfVector2f scale = {1, 1};

    sfSprite_setScale(sprite_sky, scale);
    sfSprite_setTexture(sprite_sky, texture_sky, sfFalse);
    sfRenderWindow_drawSprite(window, sprite_sky, NULL);
    sfTexture_destroy(texture_sky);
    sfSprite_destroy(sprite_sky);
}
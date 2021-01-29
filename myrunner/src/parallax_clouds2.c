/*
** EPITECH PROJECT, 2021
** parallax
** File description:
** clouds2
*/

#include "../include/my.h"

void cloud2(sfRenderWindow *window, t_animation_t *cloud2_move)
{
    sfTexture *texture_cloud2 = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/clouds_2.png", NULL);
    sfSprite *sprite_cloud2 = sfSprite_create();
    sfSprite_setTexture(sprite_cloud2, texture_cloud2, sfFalse);
    sfSprite_setPosition (sprite_cloud2, cloud2_move->pos_cloud2);
    sfRenderWindow_drawSprite(window, sprite_cloud2, NULL);
    sfTexture_destroy(texture_cloud2);
    sfSprite_destroy(sprite_cloud2);
}

void cloud2_2_move(sfRenderWindow *window, t_animation_t *cloud2_2)
{
    sfTexture *texture_cloud2_2_move = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/clouds_2.png", NULL);
    sfSprite *sprite_cloud2_2_move = sfSprite_create();
    sfSprite_setTexture(sprite_cloud2_2_move, texture_cloud2_2_move, sfFalse);
    sfSprite_setPosition (sprite_cloud2_2_move, cloud2_2->pos_cloud2_2);
    sfRenderWindow_drawSprite(window, sprite_cloud2_2_move, NULL);
    sfTexture_destroy(texture_cloud2_2_move);
    sfSprite_destroy(sprite_cloud2_2_move);
}

void parallax_clouds2(sfRenderWindow *window,
t_animation_t *cloud2_move,
t_animation_t *cloud2_2)
{
    cloud2(window, cloud2_move);
    cloud2_2_move(window, cloud2_2);
    if (cloud2_move->pos_cloud2.x <= -1920)
        cloud2_move->pos_cloud2.x = 1920;
    cloud2_move->pos_cloud2.x -= 20;
    if (cloud2_2->pos_cloud2_2.x <= -1920)
        cloud2_2->pos_cloud2_2.x = 1920;
    cloud2_2->pos_cloud2_2.x -= 20;
}
/*
** EPITECH PROJECT, 2021
** parallax
** File description:
** clouds
*/

#include "../include/my.h"

void cloud1(sfRenderWindow *window, t_animation_t *cloud1_move)
{
    sfTexture *texture_cloud1 = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/clouds_1.png", NULL);
    sfSprite *sprite_cloud1 = sfSprite_create();
    sfSprite_setTexture(sprite_cloud1, texture_cloud1, sfFalse);
    sfSprite_setPosition (sprite_cloud1, cloud1_move->pos_cloud1);
    sfRenderWindow_drawSprite(window, sprite_cloud1, NULL);
    sfTexture_destroy(texture_cloud1);
    sfSprite_destroy(sprite_cloud1);
}

void cloud1_2_move(sfRenderWindow *window, t_animation_t *cloud_1_2_move)
{
    sfTexture *texture_cloud1_2_move = sfTexture_createFromFile
    ("./background/png/game_background_1/layers/clouds_1.png", NULL);
    sfSprite *sprite_cloud1_2_move = sfSprite_create();
    sfSprite_setTexture(sprite_cloud1_2_move,
    texture_cloud1_2_move, sfFalse);
    sfSprite_setPosition (sprite_cloud1_2_move, cloud_1_2_move->pos_cloud1_2);
    sfRenderWindow_drawSprite(window, sprite_cloud1_2_move, NULL);
    sfTexture_destroy(texture_cloud1_2_move);
    sfSprite_destroy(sprite_cloud1_2_move);
}

void parallax_clouds(sfRenderWindow *window,
t_animation_t *cloud1_move, t_animation_t *cloud_1_2_move)
{
    cloud1(window, cloud1_move);
    cloud1_2_move(window, cloud_1_2_move);
    if (cloud1_move->pos_cloud1.x <= -1920)
        cloud1_move->pos_cloud1.x = 1920;
    cloud1_move->pos_cloud1.x -= 20;
    if (cloud_1_2_move->pos_cloud1_2.x <= -1920)
        cloud_1_2_move->pos_cloud1_2.x = 1920;
    cloud_1_2_move->pos_cloud1_2.x -= 20;
}